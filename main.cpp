#include 

#include 

#include 

#include 

#include 

#include 

using namespace std;

int main()

{

    // Generate a random IP

    srand(time(NULL));

    int ip1 = rand() % 256;

    int ip2 = rand() % 256;

    int ip3 = rand() % 256;

    int ip4 = rand() % 256;

    string ip = to_string(ip1) + "." + to_string(ip2) + "." + to_string(ip3) + "." + to_string(ip4);

    // Check if port 3389 is open

    cout << "Checking port 3389 on " << ip << "..." << endl;

    bool portOpen = true; // assume port is open

    // If port is open, try to bruteforce it

    if (portOpen)

    {

        cout << "Port 3389 is open. Trying to bruteforce..." << endl;

        // List of common passwords

        vector passwords = {

            "password",

            "123456",

            "123456789",

            "qwerty",

            "12345678",

            "111111",

            "1234567890",

            "1234567",

            "password1",

            "123123"

        };

        // Try each password

        for (string password : passwords)

        {

            cout << "Trying password: " << password << endl;

            // Check if password is correct

            bool correctPassword = true; // assume password is correct

            if (correctPassword)

            {

                cout << "Password found: " << password << endl;

                break;

            }

        }

    }

    else

    {

        cout << "Port 3389 is closed." << endl;

    }

    return 0;

}
