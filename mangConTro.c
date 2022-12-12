#include<stdio.h>
#include<malloc.h>

main() {
  int
  *p, n, i, j, temp;
  printf("\nNhap so luong phan tu ban muon lam viec: ");
  scanf("%d", &n);
  p = (int*)malloc(n * sizeof(int));
  for(i = 0; i < n; ++i) {
    printf("\nPhan tu thu %d: ", i + 1);
    scanf("%d", p + i);
  }
  
  //S?p x?p tãng d?n:
  for(i = 0; i < n - 1; ++i)
    for(j = i + 1; j < n; ++j)
      if(*(p + i) > *(p + j)) {
        temp = *(p + j);
        *(p + j) = *(p + i);
        *(p + i) = temp;
      }
  
  printf("\nSau khi sap xep tang dan, ta duoc:\n");
  for(i = 0; i < n; ++i)
    printf("%d\n", *(p + i));

  return 0;
}
