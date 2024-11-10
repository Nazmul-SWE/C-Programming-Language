#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int profit, weight;
    Item(int profit, int weight)
    {
        this->profit = profit;
        this->weight = weight;
    }
};

static bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.profit / (double)a.weight;
    double r2 = (double)b.profit / (double)b.weight;
    return r1 > r2;
}

double fractionalKnapsack(int C, struct Item arr[], int N)
{

    sort(arr, arr + N, cmp);
    double finalvalue = 0.0;

    for (int i = 1; i <= N; i++)
    {

        if (arr[i].weight <= C)
        {
            C -= arr[i].weight;
            finalvalue += arr[i].profit;
        }

        else
        {
            double fraction= ((double)C / (double)arr[i].weight);
            finalvalue+= arr[i].profit * fraction;
            break;
        }
    }

    return finalvalue;
}

int main()
{
    int C = 50;
    Item arr[] = { { 60, 10 }, { 100, 20 }, { 120, 30 } };
    int N = sizeof(arr) / sizeof(arr[0]);

    cout << fractionalKnapsack(C, arr, N);
    return 0;
}
