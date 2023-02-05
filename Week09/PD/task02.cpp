#include <iostream>
using namespace std;

int main() {
    string movies[] = { "BulletTrain", "Avengers", "JohnWick", "Matrix", "Smile" };
    string movie;
    cout << "Movie: ";
    cin >> movie;

    int movieIndex = -1, moviesCount = 5, discount = 5, price = 500;
    for (int i = 0; i < moviesCount; i++) {
        if (movie == movies[i]) {
            movieIndex = i;
            break;
        }
    }

    if (movieIndex + 1 % 2 == 0) {
        discount = 10;
    }

    float finalPrice = price - (price * discount / 100.0);
    cout << "Final Price of " << movies[movieIndex] << ": " << finalPrice << endl;

    return 0;
}