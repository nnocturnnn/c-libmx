 #include"libmx.h"
static void mx_swap_str(char **s1, char **s2) {
   char *temp;
   temp = *s1;
   *s1 = *s2;
   *s2 = temp;
}

int mx_quicksort(char **arr, int left, int right)
{
    int count = 0;
    if(arr == NULL) return -1;
    if(left < right)
    {
        int low = left, high = right;
        char *middle = arr[(low + high) / 2];
        while(low <= high)
        {
            while(mx_strlen(arr[low]) < mx_strlen(middle)) low++;
            while(mx_strlen(arr[high]) > mx_strlen(middle)) high--;
            if(low <= high)
            {
                if(arr[low] != arr[high]
                    && mx_strlen(arr[low]) != mx_strlen(arr[high])) count++;
                mx_swap_str(&arr[low],&arr[high]);
                low++;
                high--;
            }
        }
        count += mx_quicksort(arr, left, high);
        count += mx_quicksort(arr, low, right);
    }
    return count;
}

