//BTTH 05 struct Bai 3 
#include <stdio.h>
#include <string.h>

struct Employee{
  char name[30];
  int id;
  char position[30];
  int salary;
};

void themnhanvien(struct Employee *ds, int *n) {
  printf("Nhap thong tin nhan vien moi:\n");
  printf("Ho Ten: ");
  scanf("%s", ds[*n].name);
  printf("ID: ");
  scanf("%d", &ds[*n].id);
  printf("Chuc vu: ");
  scanf("%s", ds[*n].position);
  printf("Luong: ");
  scanf("%d", &ds[*n].salary);
  (*n)++;
}

void xoanhanvien(struct Employee *ds, int n, int id) {
  for (int i=0; i<n; i++) {
    if (ds[i].id == id) {
      for (int j=i; j<n-1; j++) {
        ds[j]=ds[j+1];
      }
      n--;
      break;
    }
  }
}

void hienthinhanvien(struct Employee *ds, int n) {
  for (int i=0; i<n; i++) {
    printf("Thong tin nhan vien thu %d:\n", i+1);
    printf("Ho Ten: %s\n", ds[i].name);
    printf("ID: %d\n", ds[i].id);
    printf("Chuc vu: %s\n", ds[i].position);
    printf("Luong: %d\n", ds[i].salary);
  }
}

void sapxeptheoten(struct Employee *ds, int n) {
  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      if (strcmp(ds[i].name, ds[j].name)>0) {
        struct Employee temp=ds[i];
        ds[i]=ds[j];
        ds[j]=temp;
      }
    }
  }
}

int main(){
  struct Employee ds[100];
  int n = 0;

  while (1) {
    printf("Menu:\n");
    printf("1. Them nhan vien\n");
    printf("2. Xoa nhan vien\n");
    printf("3. Hien thi nhan vien\n");
    printf("4. Sap xep nhan vien\n");
    printf("5. Thoat\n");

    int chon;
    printf("Chon chuc nang: ");
    scanf("%d", &chon);

    switch (chon) {
    case 1:
      themnhanvien(ds, &n);
      break;
    case 2:
      printf("Nhap ID nhan vien can xoa: ");
      int id;
      scanf("%d", &id);
      xoanhanvien(ds, n, id);
      break;
    case 3:
      hienthinhanvien(ds, n);
      break;
    case 4:
      sapxeptheoten(ds, n);
      break;
    case 5:
      return 0;
    default:
      printf("Chon chuc nang khong hop le.\n");
      break;
    }
  }
  return 0;
}
