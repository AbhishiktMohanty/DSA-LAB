// #include<limits.h> 
// #include<stdlib.h> 
// #include<stdio.h>

int minDist_1_8(int arr[], int n, int x, int y){
    int i, j;
    int min_dist = INT_MAX;
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if ((x == arr[i] && y == arr[j] || y == arr[i] && x == arr[j]) && min_dist > abs(i - j)){
                min_dist = abs(i - j);
            }
        }
    }
    if (min_dist > n){
        return -1;
    }
    return min_dist;
}
int main_1_8(){
    int n;
    printf("Enter the number of elements on the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of the array: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int x,y;
    printf("Enter the number between which you want to find the minimum distance (X and Y): ");
    scanf("%d%d",&x,&y);
    printf("Minimum distance between %d and %d is %d\n", x, y, minDist_1_8(arr, n, x, y));
    
    return 0;
}