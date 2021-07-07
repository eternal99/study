#include <iostream>
#include <vector>

using namespace std;

void Combination(vector<char> arr, vector<char> comb, int r, int index, int depth)
{
    if (r == 0)
    {
        for(int i = 0; i < comb.size(); i++)
            cout << comb[i] << " ";
        cout << endl;
    }
    else if (depth == arr.size())  // depth == n // 계속 안뽑다가 r 개를 채우지 못한 경우는 이 곳에 걸려야 한다.
    {
        return;
    }
    else
    {
        // arr[depth] 를 뽑은 경우
        comb[index] = arr[depth];
        Combination(arr, comb, r - 1, index + 1, depth + 1);
        
        // arr[depth] 를 뽑지 않은 경우
        Combination(arr, comb, r, index, depth + 1);
    }
}

int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};  // n = 5
    
    int r = 3;
    vector<char> comb(r);
    
    Combination(vec, comb, r, 0, 0);  // {'a', 'b', 'c', 'd', 'e'}의 '5C3' 구하기 

    return 0;
}
