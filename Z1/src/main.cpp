#include <iostream>
#include <vector>

int ZarotirajBroj(int broj) {
    int pom = 0, faktor = 10;
    while (broj > 0) {
        pom = pom * faktor + broj % 10;
        broj = broj / 10;
        faktor = faktor * 10;
    }
    return pom;
};
bool DaLiImaZarotiran(std::vector<int> v, int num) {
    for (int i = 0; i < v.size(); i++) {
        if (ZarotirajBroj(v[i]) == num)
            return true;
    }
    return false;
}

int main(){
    std::vector<int> v{ 15, 18, 1, 23, 62, 28, 19, 254 };
    int br = 26;
    std::cout << "Unutar niza postoji zarotirana verzija broja " << br << " " << std::boolalpha << DaLiImaZarotiran(v, br);
    return 0;
}