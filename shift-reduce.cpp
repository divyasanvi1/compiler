#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

void Parsing(vector<string> s) {
    stack<string> st;
    int index = 0;

    while (index < s.size() || !st.empty()) {
        if (index < s.size()) {
            // Shift operation
            st.push(s[index]);
            cout << "Shift: " << s[index] << endl;
            index++;
        }

        // Reduce operation
        while (st.size() >= 3) {
            string top = st.top(); st.pop();
            string mid = st.top(); st.pop();
            string bot = st.top(); st.pop();

            if (top == "id" && mid == "+" && bot == "id") {
                st.push("E");
                cout << "Reduce: E -> id + id" << endl;
            } else {
                // Push back the tokens if reduction is not possible
                st.push(bot);
                st.push(mid);
                st.push(top);
            // Exit reduce loop to process further tokens
            }
        }
    }
cout << "Current stack: ";
    // Final check for successful parsing
    if (st.size() == 1 && st.top() == "E" && index == s.size()) {
        cout << "Parsing successful" << endl;
    } else {
        cout << "Parsing unsuccessful" << endl;
    }
}

int main() {
    vector<string> s = {"id", "+", "id"};
    Parsing(s);
    return 0;
}
