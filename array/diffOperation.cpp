#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, pos, value;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n------ Array Operations ------";
        cout << "\n1. Traversal";
        cout << "\n2. Insertion";
        cout << "\n3. Deletion";
        cout << "\n4. Update";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: // Traversal
            cout << "Array Elements: ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 2: // Insertion
            cout << "Enter the position (1 to " << n + 1 << "): ";
            cin >> pos;

            if (pos < 1 || pos > n + 1) {
                cout << "Invalid Position!" << endl;
            } else {
                cout << "Enter the value to insert: ";
                cin >> value;

                for (int i = n; i >= pos; i--) {
                    arr[i] = arr[i - 1];
                }

                arr[pos - 1] = value;
                n++;

                cout << "Element inserted successfully." << endl;
            }
            break;

        case 3: // Deletion
            cout << "Enter the position (1 to " << n << "): ";
            cin >> pos;

            if (pos < 1 || pos > n) {
                cout << "Invalid Position!" << endl;
            } else {
                for (int i = pos - 1; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }

                n--;
                cout << "Element deleted successfully." << endl;
            }
            break;

        case 4: // Update
            cout << "Enter the position (1 to " << n << "): ";
            cin >> pos;

            if (pos < 1 || pos > n) {
                cout << "Invalid Position!" << endl;
            } else {
                cout << "Enter the new value: ";
                cin >> value;
                arr[pos - 1] = value;

                cout << "Element updated successfully." << endl;
            }
            break;

        case 5:
            cout << "Program Ended." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}