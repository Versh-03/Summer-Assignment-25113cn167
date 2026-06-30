//WAP to develop a mini project using arrays, strings and functions

#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_CLUBS = 20;
const int MAX_MEMBERS = 50;
const int MAX_TROPHIES = 30;
const int NAME_LEN = 50;

struct Member {
    int memberId;
    char name[NAME_LEN];
    int age;
    char designation[NAME_LEN];
};

struct Club {
    int clubId;
    char clubName[NAME_LEN];
    char coachName[NAME_LEN];
    Member members[MAX_MEMBERS];
    int memberCount;
    char trophies[MAX_TROPHIES][NAME_LEN];
    int trophyCount;
};

Club clubs[MAX_CLUBS];
int clubCount = 0;

int findClubIndex(int clubId) {
    for (int i = 0; i < clubCount; i++) {
        if (clubs[i].clubId == clubId) return i;
    }
    return -1;
}

int findMemberIndex(Club &c, int memberId) {
    for (int i = 0; i < c.memberCount; i++) {
        if (c.members[i].memberId == memberId) return i;
    }
    return -1;
}

void addClub() {
    if (clubCount >= MAX_CLUBS) {
        cout << "Club storage full!" << endl;
        return;
    }

    Club c;
    cout << "Enter Club ID: ";
    cin >> c.clubId;

    if (findClubIndex(c.clubId) != -1) {
        cout << "Club with this ID already exists!" << endl;
        return;
    }

    cout << "Enter Club Name: ";
    cin.ignore();
    cin.getline(c.clubName, NAME_LEN);

    cout << "Enter Coach Name: ";
    cin.getline(c.coachName, NAME_LEN);

    c.memberCount = 0;
    c.trophyCount = 0;

    clubs[clubCount++] = c;
    cout << "Club added successfully!" << endl;
}

void addMember() {
    int clubId;
    cout << "Enter Club ID to add member to: ";
    cin >> clubId;

    int idx = findClubIndex(clubId);
    if (idx == -1) {
        cout << "Club not found." << endl;
        return;
    }

    Club &c = clubs[idx];
    if (c.memberCount >= MAX_MEMBERS) {
        cout << "Member storage full for this club!" << endl;
        return;
    }

    Member m;
    cout << "Enter Member ID: ";
    cin >> m.memberId;

    if (findMemberIndex(c, m.memberId) != -1) {
        cout << "Member with this ID already exists in this club!" << endl;
        return;
    }

    cout << "Enter Member Name: ";
    cin.ignore();
    cin.getline(m.name, NAME_LEN);

    cout << "Enter Age: ";
    cin >> m.age;

    cout << "Enter Designation (Captain/Player/Vice-Captain): ";
    cin.ignore();
    cin.getline(m.designation, NAME_LEN);

    c.members[c.memberCount++] = m;
    cout << "Member added successfully!" << endl;
}

void addTrophy() {
    int clubId;
    cout << "Enter Club ID to add trophy to: ";
    cin >> clubId;

    int idx = findClubIndex(clubId);
    if (idx == -1) {
        cout << "Club not found." << endl;
        return;
    }

    Club &c = clubs[idx];
    if (c.trophyCount >= MAX_TROPHIES) {
        cout << "Trophy storage full for this club!" << endl;
        return;
    }

    cout << "Enter Trophy Name: ";
    cin.ignore();
    cin.getline(c.trophies[c.trophyCount], NAME_LEN);
    c.trophyCount++;

    cout << "Trophy added successfully!" << endl;
}

void displayMembers(Club &c) {
    if (c.memberCount == 0) {
        cout << "No members in this club." << endl;
        return;
    }

    cout << left << setw(10) << "ID" << setw(20) << "Name" << setw(6) << "Age" << setw(15) << "Designation" << endl;
    for (int i = 0; i < c.memberCount; i++) {
        cout << left << setw(10) << c.members[i].memberId
             << setw(20) << c.members[i].name
             << setw(6) << c.members[i].age
             << setw(15) << c.members[i].designation << endl;
    }
}

void displayTrophies(Club &c) {
    if (c.trophyCount == 0) {
        cout << "No trophies won by this club yet." << endl;
        return;
    }

    for (int i = 0; i < c.trophyCount; i++) {
        cout << (i + 1) << ". " << c.trophies[i] << endl;
    }
}

void displayClub(Club &c) {
    cout << "=====================================" << endl;
    cout << "Club ID       : " << c.clubId << endl;
    cout << "Club Name     : " << c.clubName << endl;
    cout << "Coach Name    : " << c.coachName << endl;
    cout << "Total Members : " << c.memberCount << endl;
    cout << "Total Trophies: " << c.trophyCount << endl;
    cout << "-------------------------------------" << endl;
    cout << "Members:" << endl;
    displayMembers(c);
    cout << "-------------------------------------" << endl;
    cout << "Trophies:" << endl;
    displayTrophies(c);
    cout << "=====================================" << endl;
}

void displayAllClubs() {
    if (clubCount == 0) {
        cout << "No clubs found." << endl;
        return;
    }
    for (int i = 0; i < clubCount; i++) displayClub(clubs[i]);
}

void searchClub() {
    int clubId;
    cout << "Enter Club ID to search: ";
    cin >> clubId;

    int idx = findClubIndex(clubId);
    if (idx == -1) {
        cout << "Club not found." << endl;
        return;
    }
    displayClub(clubs[idx]);
}

void deleteClub() {
    int clubId;
    cout << "Enter Club ID to delete: ";
    cin >> clubId;

    int idx = findClubIndex(clubId);
    if (idx == -1) {
        cout << "Club not found." << endl;
        return;
    }

    for (int i = idx; i < clubCount - 1; i++) {
        clubs[i] = clubs[i + 1];
    }
    clubCount--;
    cout << "Club deleted successfully!" << endl;
}

void mostDecoratedClub() {
    if (clubCount == 0) {
        cout << "No clubs found." << endl;
        return;
    }

    int maxIdx = 0;
    for (int i = 1; i < clubCount; i++) {
        if (clubs[i].trophyCount > clubs[maxIdx].trophyCount) maxIdx = i;
    }

    cout << "Most decorated club: " << clubs[maxIdx].clubName
         << " with " << clubs[maxIdx].trophyCount << " trophies." << endl;
}

void showMenu() {
    cout << endl << "========= COLLEGE SPORTS CLUB MANAGEMENT SYSTEM =========" << endl;
    cout << "1. Add Club" << endl;
    cout << "2. Add Member to Club" << endl;
    cout << "3. Add Trophy to Club" << endl;
    cout << "4. Display All Clubs" << endl;
    cout << "5. Search Club" << endl;
    cout << "6. Delete Club" << endl;
    cout << "7. Show Most Decorated Club" << endl;
    cout << "8. Exit" << endl;
    cout << "===========================================================" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: addClub(); break;
            case 2: addMember(); break;
            case 3: addTrophy(); break;
            case 4: displayAllClubs(); break;
            case 5: searchClub(); break;
            case 6: deleteClub(); break;
            case 7: mostDecoratedClub(); break;
            case 8: cout << "Thank You!" << endl; break;
            default: cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 8);

    return 0;
}