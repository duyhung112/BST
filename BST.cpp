
#include<iostream>
using namespace std;

#include<fstream>
#include<ctime>
#include<queue>
#include<stack>
#include<string>
#include<iomanip>


// ========================== BÀI 1 BT MẪU ========================== \\

struct TNode_Int
{
	int data;
	TNode_Int *left, *right;
};

struct BST_Int // Binary Search Tree
{
	TNode_Int *root;
};

void init_BSTI(BST_Int &t);
TNode_Int* create_TNodeInt(int data);
bool insert_TNodeInt(TNode_Int *&root, TNode_Int *them);
void create_BST_FromArray(BST_Int &t, int arr[], int soluong);
void show_TNodeInt(TNode_Int *node);
void traverseNLR_BSTI(TNode_Int *root);
void traverseLNR_BSTI(TNode_Int *root);
void traverseNRL_BSTI(TNode_Int *root);
void traverseRNL_BSTI(TNode_Int *root);
void traverseLRN_BSTI(TNode_Int *root);
void traverseRLN_BSTI(TNode_Int *root);
int countIsLeafOfLevelK(TNode_Int *root, int k);
void delete_BSTI(TNode_Int *&root);

// ========================== BÀI 1 ========================== \\

void Xu_Ly_Bai1();
void DocFile_SoNguyen(BST_Int &t, char filename[]);
void traverseBreadthNLR(TNode_Int *root);
void traverseBreadthNRL(TNode_Int *root);

void traverseDepthNLR(TNode_Int *root);
void traverseDepthNRL(TNode_Int *root);
void traverseDepthLNR(TNode_Int *root);
void traverseDepthRNL(TNode_Int *root);
void traverseDepthLRN(TNode_Int *root);
void traverseDepthRLN(TNode_Int *root);

TNode_Int* find_TNodeInt(TNode_Int* root, int x);
bool delete_TNodeInt_X(TNode_Int *&root, int x);
TNode_Int* find_TNodeInt_Replace(TNode_Int *&p);
int dem_TNodeInt_Lon_Hon_X(TNode_Int *root, int x);
int dem_TNodeInt_Nho_Hon_X(TNode_Int *root, int x);
int dem_TNodeInt_Trong_Khoang_XY(TNode_Int *root, int x, int y);
TNode_Int* find_TNodeInt_Max(TNode_Int *root);
TNode_Int* find_TNodeInt_Min(TNode_Int *root);

void show_TNodeInt_MucK(TNode_Int *root, int k, int &dem);
void show_TNodeIntLeaf_MucK(TNode_Int *root, int k, int &dem);
void show_TNodeInt1Child_MucK(TNode_Int *root, int k, int &dem);
void show_TNodeInt2Child_MucK(TNode_Int *root, int k, int &dem);

int count_TNodeInt_MucK(TNode_Int *root, int k);
int count_TNodeInt1Child_MucK(TNode_Int *root, int k);
int count_TNodeInt2Child_MucK(TNode_Int *root, int k);

int sum_TNodeInt_Duong(TNode_Int *root);
int sum_TNodeInt_Am(TNode_Int *root);

int maxDistance(TNode_Int *root, int x);
int minDistance(TNode_Int *root, int x);

int count_TNodeInt(TNode_Int *root);
int count_TNodeInt_KhuDQ(TNode_Int *root);

bool KiemTra_SNT(int x);
bool KiemTra_SCP(int x);
/* Số hoàn thiện là số có tổng các ước số của nó (không kể nó) thì BẰNG CHÍNH NÓ */
bool KiemTra_So_Hoan_Thien(int x);
/* Số thịnh vượng là số có tổng các ước số của nó (không kể nó) thì LỚN HƠN NÓ */
bool KiemTra_So_Thinh_Vuong(int x);
/* Số yếu là số có tổng các ước số của nó (không kể nó) thì NHỎ HƠN NÓ */
bool KiemTra_So_Yeu(int x);

int count_TNodeInt_SNT(TNode_Int *root);
int count_TNodeInt_SCP(TNode_Int *root);
int count_TNodeInt_So_Hoan_Thien(TNode_Int *root);
int count_TNodeInt_So_Thinh_Vuong(TNode_Int *root);
int count_TNodeInt_So_Yeu(TNode_Int *root);

int sum_TNodeInt(TNode_Int *root);
int sum_TNodeInt_KhuDQ(TNode_Int *root);

// ========================== BÀI 3 ========================== \\

void show_All_TNodeInt_So_Hoan_Thien(TNode_Int* root);
int count_TNodeInt_Leaf_Chan(TNode_Int* root);
int count_TNodeInt_1Child_SNT(TNode_Int* root);
int count_TNodeInt_2Child_SCP(TNode_Int* root);
int count_TNodeInt_Shorter_LevelK(TNode_Int* root, int k);
int count_TNodeInt_Taller_LevelK(TNode_Int* root, int k);
int sum_TNodeInt_Le(TNode_Int* root);
bool KiemTra_CayNhiPhanTimKiem(TNode_Int* root);

// ========================== BÀI 2 ========================== \\

struct PS
{
	int tu, mau;
};
struct TNode_PS
{
	PS data;
	TNode_PS *left, *right;
};

struct BST_PS // Binary Search Tree
{
	TNode_PS *root;
};


void Xu_Ly_Bai2();
void nhap_PS(PS &ps);
void Chuan_Dau_PS(PS &ps);
// so sánh 2 phân số: 1 - s1>s2 , -1 - s1<s2 , 0 - s1 = s2
int So_Sanh_PS(PS s1, PS s2);
void DocFile_PhanSo(TNode_PS *&root, char filename[]);

void init_BSTPS(BST_PS &t);
TNode_PS* create_TNodePS(PS data);
bool insert_TNodePS(TNode_PS *&root, TNode_PS *them);
void show_TNodePS(TNode_PS *node);
void traverseNLR_BSTPS(TNode_PS *root);
void traverseLNR_BSTPS(TNode_PS *root);
void traverseNRL_BSTPS(TNode_PS *root);
void traverseRNL_BSTPS(TNode_PS *root);
void traverseLRN_BSTPS(TNode_PS *root);
void traverseRLN_BSTPS(TNode_PS *root);
void delete_BSTPS(TNode_PS *&root);

TNode_PS* find_TNodePS(TNode_PS* root, PS ps);

bool delete_TNodePS_X(TNode_PS *&root, PS x);
TNode_PS* find_TNodePS_Replace(TNode_PS *&p);

void delete_All_TNodePS_Bigger_2(TNode_PS *&root);
void delete_All_TNodePS_Mau_SNT(TNode_PS *&root);
PS sum_TNodePS(TNode_PS *root);
TNode_PS* find_PS_Min(TNode_PS *root);
TNode_PS* find_PS_Max(TNode_PS *root);
void show_All_PS_Tu_Bigger_Mau(TNode_PS *root);
void show_All_PS_Tu_Smaller_Mau(TNode_PS *root);
void show_All_PS_TuMau_SNT(TNode_PS *root);
void show_All_PS_Level_K(TNode_PS *root, int k);


// ========================== BÀI 4 ========================== \\
 Cây Nhị Phân Tìm Kiếm: Từ điển Anh-Việt, word-mean. Word là khóa
struct Node_TuDien
{
	string word, mean;
	Node_TuDien *left, *right;
};
struct BST_TuDien
{
	Node_TuDien *root;
};

void Xu_Ly_Bai4();
void DocFile_TuDien(Node_TuDien *&root, char filename[]);
void init_BST_TuDien(BST_TuDien &td);
Node_TuDien* create_Node_TuDien(string word, string mean);
bool insert_Node_TuDien(Node_TuDien *&root, Node_TuDien *them);
void show_Node_TuDien(Node_TuDien *node);
void traverseLNR_BST_TuDien(Node_TuDien *root);
void delete_BST_TuDien(Node_TuDien *&root);
Node_TuDien* find_Node_TuDien_Replace(Node_TuDien *&p);
bool delete_Node_TuDien(Node_TuDien *&root, string word);
Node_TuDien* find_Node_TuDien(Node_TuDien *root, string word);
void Chinh_Sua_Nghia_Node_TuDien(Node_TuDien *&node);

int main()
{
	int luachon;
	while (true)
	{
		system("cls");
		cout << "\n\t\t\t\t ------------------- MUNU MAIN -------------------";
		cout << "\n\t\t1. Bai 1 va bai 3.";
		cout << "\n\t\t2. Bai 2.";
		cout << "\n\t\t4. Bai 4.";
		cout << "\n\t\t0. Thoat.";
		cout << "\n\t\t\t\t -------------------------------------------------";
		cout << "\n\tNhap lua chon:"; cin >> luachon;

		if (luachon == 0)
		{
			break;
		}
		else if (luachon == 1)
		{
			Xu_Ly_Bai1();
		}
		else if (luachon == 2)
		{
			Xu_Ly_Bai2();
		}
		else if (luachon == 4)
		{
			Xu_Ly_Bai4();
		}
		else
		{
			cout << "\n\tNhap lua chon cho chinh xac!" << endl;
			system("pause");
		}
	}
	return 0;
}



// ========================== BÀI 1 BT MẪU ========================== \\

void init_BSTI(BST_Int &t)
{
	t.root = NULL;
}
TNode_Int* create_TNodeInt(int data)
{
	TNode_Int *p = new TNode_Int;
	if (p == NULL)
	{
		cout << "\nKhong du bo nho de cap phat!" << endl;
		return NULL;
	}
	p->data = data;
	p->left = NULL;
	p->right = NULL;
	return p;
}
bool insert_TNodeInt(TNode_Int *&root, TNode_Int *them)
{
	if (them == NULL)
		return false;
	if (root == NULL)
	{
		root = them;
		return true;
	}
	else
	{
		if (root->data == them->data)
			return false;
		else if (root->data > them->data)
			return insert_TNodeInt(root->left, them);
		else if (root->data < them->data)
			return insert_TNodeInt(root->right, them);
	}
}
void create_BST_FromArray(BST_Int &t, int arr[], int soluong)
{
	for (int i = 0; i < soluong; i++)
	{
		bool kt;
		do
		{
			arr[i] = rand() % 101 - 50;
			TNode_Int* them = create_TNodeInt(arr[i]);
			kt = insert_TNodeInt(t.root, them);
		} while (kt == false);
	}
}
void show_TNodeInt(TNode_Int *node)
{
	cout << "\t" << node->data;
}
void traverseNLR_BSTI(TNode_Int *root)
{
	if (root == NULL)
		return;
	show_TNodeInt(root);
	traverseNLR_BSTI(root->left);
	traverseNLR_BSTI(root->right);
}
void traverseLNR_BSTI(TNode_Int *root)
{
	if (root == NULL)
		return;
	traverseLNR_BSTI(root->left);
	show_TNodeInt(root);
	traverseLNR_BSTI(root->right);
}
void traverseNRL_BSTI(TNode_Int *root)
{
	if (root == NULL)
		return;
	show_TNodeInt(root);
	traverseNRL_BSTI(root->right);
	traverseNRL_BSTI(root->left);
}
void traverseRNL_BSTI(TNode_Int *root)
{
	if (root == NULL)
		return;
	traverseRNL_BSTI(root->right);
	show_TNodeInt(root);
	traverseRNL_BSTI(root->left);
}
void traverseLRN_BSTI(TNode_Int *root)
{
	if (root == NULL)
		return;
	traverseLRN_BSTI(root->left);
	traverseLRN_BSTI(root->right);
	show_TNodeInt(root);
}
void traverseRLN_BSTI(TNode_Int *root)
{
	if (root == NULL)
		return;
	traverseRLN_BSTI(root->right);
	traverseRLN_BSTI(root->left);
	show_TNodeInt(root);
}
int countIsLeafOfLevelK(TNode_Int *root, int k)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (k == 0)
	{
		if (root->left == NULL && root->right == NULL)
			return 1;
	}
	else
	{
		k--;
		dem += countIsLeafOfLevelK(root->left, k);
		dem += countIsLeafOfLevelK(root->right, k);
	}
	return dem;
}
void delete_BSTI(TNode_Int *&root)
{
	if (root == NULL)
		return;
	delete_BSTI(root->left);
	delete_BSTI(root->right);
	delete root;
}

// ========================== BÀI 1 ========================== \\

void Xu_Ly_Bai1()
{
	int luachon;
	BST_Int t;
	init_BSTI(t);
	while (true)
	{
		system("cls");
		cout << "\n\t\t\t\t ------------------- MUNU BAI1 -------------------";
		cout << "\n\t\t1. Tao cay tu mang.";
		cout << "\n\t\t2. Doc file (nhap tu ban phim).";
		cout << "\n\t\t3. Tao ngau nhien 1 node trong cay.";
		cout << "\n\t\t4. Duyet cay.";
		cout << "\n\t\t5. Duyet cay theo chieu rong NLR NRL.";
		cout << "\n\t\t6. Duyet cay theo chieu sau.";
		cout << "\n\t\t7. Them 1 node gia tri x.";
		cout << "\n\t\t8. Tim node co gia tri x.";
		cout << "\n\t\t9. Xoa node co gia tri x.";
		cout << "\n\t\t10. Xuat theo chieu giam dan.";
		cout << "\n\t\t11. Dem gia tri lon hon x, nho hon x va trong [x,y].";
		cout << "\n\t\t12. Tim node lon nhat, nho nhat cua cay.";
		cout << "\n\t\t13. Xuat node o muc k, node la o muc k, node 1 con va 2 con o muc k.";
		cout << "\n\t\t14. Dem so node o muc k, node la o muc k, node 1 con va 2 con o muc k.";
		cout << "\n\t\t15. Tinh tong node duong/am.";
		cout << "\n\t\t16. Tim node co khoang cach xa/gan x nhat.";
		cout << "\n\t\t17. Dem node trong cay.";
		cout << "\n\t\t18. Dem node la SNT,SCP, so hoan thien, so thinh vuong, so yeu.";
		cout << "\n\t\t19. Tinh tong cac node trong cay.";
		cout << "\n\t\t\t\t ------------------- MUNU BAI3 -------------------";
		cout << "\n\t\t20. Xuat cac so hoan thien.";
		cout << "\n\t\t21. Dem cac node la chan.";
		cout << "\n\t\t22. Dem cac node 1 con SNT.";
		cout << "\n\t\t23. Dem cac node 2 con SCP.";
		cout << "\n\t\t24. Dem node tang thap hon k.";
		cout << "\n\t\t25. Dem node tang cao hon k.";
		cout << "\n\t\t26. Tinh tong cac node le.";
		cout << "\n\t\t27. Kiem tra co phai la cay nhi phan tim kiem hay khong?";
		cout << "\n\t\t0. Thoat.";
		cout << "\n\t\t\t\t -------------------------------------------------";
		cout << "\n\tNhap lua chon:"; cin >> luachon;

		srand(time(NULL));
		if (luachon == 0)
		{
			delete_BSTI(t.root);
			break;
		}
		else if (luachon == 1)
		{
			int a[20], n;
			do
			{
				cout << "\n\tNhap so luong phan tu muon tao:";
				cin >> n;
				if (n <= 0 || n > 20)
				{
					cout << "\nVui long nhap so luong nguyen duong va nho hon 20 phan tu!" << endl;
					system("pause");
				}
			} while (n <= 0 || n > 20);
			create_BST_FromArray(t, a, n);
			cout << "\n\tCac phan tu da tao trong mang la:";
			for (int i = 0; i < n; i++)
			{
				cout << "\t" << a[i];
			}
			cout << endl;
		}
		else if (luachon == 2)
		{
			DocFile_SoNguyen(t, "SoNguyen.txt");
			cout << "\nDa hoan thanh thao tac." << endl;
		}
		else if (luachon == 3)
		{
			bool kt;
			int data;
			do
			{
				data = rand() % 101 - 50;
				TNode_Int *them = create_TNodeInt(data);
				kt = insert_TNodeInt(t.root, them);
			} while (kt == false);
			cout << "\n\tGia tri vua them la:" << data << endl;
		}
		else if (luachon == 4)
		{
			if (t.root != NULL)
			{
				cout << "\n\t\t\t\t\t 6 CACH DUYET CAY\n";
				cout << "\n\tNLR:"; traverseNLR_BSTI(t.root);
				cout << "\n\tNRL:"; traverseNRL_BSTI(t.root);
				cout << "\n\tLNR:"; traverseLNR_BSTI(t.root);
				cout << "\n\tRNL:"; traverseRNL_BSTI(t.root);
				cout << "\n\tLRN:"; traverseLRN_BSTI(t.root);
				cout << "\n\tRLN:"; traverseRLN_BSTI(t.root);
				cout << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 5)
		{
			if (t.root != NULL)
			{
				cout << "\n\t\t\t\t\tDUYET CAY THEO CHIEU RONG NLR NRL\n";
				cout << "\n\tNLR:"; traverseBreadthNLR(t.root);
				cout << "\n\tNRL:"; traverseBreadthNRL(t.root);
				cout << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 6)
		{
			cout << "\n\t\t\t\t\t 6 CACH DUYET CAY\n";
			cout << "\n\tNLR:"; traverseDepthNLR(t.root);
			cout << "\n\tNRL:"; traverseDepthNRL(t.root);
			/*cout << "\n\tLNR:"; traverseDepthLNR(t.root);
			cout << "\n\tRNL:"; traverseDepthRNL(t.root);
			cout << "\n\tLRN:"; traverseDepthLRN(t.root);
			cout << "\n\tRLN:"; traverseDepthRLN(t.root);*/
			cout << endl;
		}
		else if (luachon == 7)
		{
			int data;
			cout << "\n\tNhap gia tri x muon them vao cay:";
			cin >> data;
			TNode_Int* them = create_TNodeInt(data);
			bool kt = insert_TNodeInt(t.root, them);
			if (kt == true)
				cout << "\n\tThem thanh cong." << endl;
			else cout << "\n\tThem that bai!" << endl;
		}
		else if (luachon == 8)
		{
			if (t.root != NULL)
			{
				int x;
				cout << "\n\tNhap gia tri x can tim:";
				cin >> x;
				TNode_Int* find = find_TNodeInt(t.root, x);
				if (find == NULL)
					cout << "\n\tNode co gia tri " << x << " khong ton tai trong cay!" << endl;
				else cout << "\n\tNode co gia tri " << x << " co ton tai trong cay." << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 9)
		{
			if (t.root != NULL)
			{
				int x;
				cout << "\n\tNhap gia tri x can xoa:";
				cin >> x;
				bool kt = delete_TNodeInt_X(t.root, x);
				if (kt == true)
					cout << "\n\tXoa thanh cong." << endl;
				else cout << "\n\tXoa that bai!" << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 10)
		{
			if (t.root != NULL)
			{
				cout << "\n\tGia tri trong cay giam dan:";
				traverseRNL_BSTI(t.root);
				cout << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 11)
		{
			if (t.root != NULL)
			{
				int x, y;
				cout << "\n\tNhap gia tri x = ";
				cin >> x;
				do
				{
					cout << "\n\tNhap gia tri y = ";
					cin >> y;
				} while (y < x);
				int dem = dem_TNodeInt_Lon_Hon_X(t.root, x);
				if (dem != 0)
					cout << "\n\tCo " << dem << " node co gia tri lon hon " << x << endl;
				else cout << "\n\tTrong cay khong ton tai gia tri lon hon " << x << "!" << endl;
				dem = dem_TNodeInt_Nho_Hon_X(t.root, x);
				if (dem != 0)
					cout << "\n\tCo " << dem << " node co gia tri nho hon " << x << endl;
				else cout << "\n\tTrong cay khong ton tai gia tri nho hon " << x << "!" << endl;
				dem = dem_TNodeInt_Trong_Khoang_XY(t.root, x, y);
				if (dem != 0)
					cout << "\n\tCo " << dem << " node co gia tri trong khoang [" << x << "," << y << "]." << endl;
				else cout << "\n\tTrong cay khong ton tai gia tri trong khoang [" << x << "," << y << "]!" << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 12)
		{
			if (t.root != NULL)
			{
				TNode_Int *find;
				find = find_TNodeInt_Max(t.root);
				if (find != NULL)
					cout << "\n\tNode co gia tri lon nhat la:" << find->data << endl;
				find = find_TNodeInt_Min(t.root);
				if (find != NULL)
					cout << "\n\tNode co gia tri nho nhat la:" << find->data << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 13)
		{
			if (t.root != NULL)
			{
				int dem = 0;
				int k;
				do
				{
					cout << "\n\tNhap muc k = ";
					cin >> k;
				} while (k < 0);
				cout << "\n\t\t\t\tTAT CA NODE\n";
				cout << "\n\tNode o muc " << k << " la:";
				show_TNodeInt_MucK(t.root, k, dem);
				if (dem == 0)
					cout << "\n\tTrong cay khong ton tai node muc " << k << endl;
				else
				{
					dem = 0;
					cout << "\n\t\t\t\tNODE LA\n";
					cout << "\n\tNode la o muc " << k << " la:";
					show_TNodeIntLeaf_MucK(t.root, k, dem);
					if (dem == 0)
						cout << "\n\tTrong cay khong ton tai node la o muc " << k << endl;
					dem = 0;
					cout << "\n\t\t\t\tNODE 1 CON\n";
					cout << "\n\tNode 1 con o muc " << k << " la:";
					show_TNodeInt1Child_MucK(t.root, k, dem);
					if (dem == 0)
						cout << "\n\tTrong cay khong ton tai node 1 con o muc " << k << endl;
					dem = 0;
					cout << "\n\t\t\t\tNODE 2 CON\n";
					cout << "\n\tNode 2 con o muc " << k << " la:";
					show_TNodeInt2Child_MucK(t.root, k, dem);
					if (dem == 0)
						cout << "\n\tTrong cay khong ton tai node 2 con o muc " << k << endl;
					cout << endl;
				}
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 14)
		{
			if (t.root != NULL)
			{
				int dem = 0;
				int k;
				do
				{
					cout << "\n\tNhap muc k = ";
					cin >> k;
				} while (k < 0);
				dem = count_TNodeInt_MucK(t.root, k);
				cout << "\n\tNode o muc " << k << " co " << dem << " node.";
				dem = countIsLeafOfLevelK(t.root, k);
				cout << "\n\tNode la o muc " << k << " co " << dem << " node.";
				dem = count_TNodeInt1Child_MucK(t.root, k);
				cout << "\n\tNode 1 con o muc " << k << " co " << dem << " node.";
				dem = count_TNodeInt2Child_MucK(t.root, k);
				cout << "\n\tNode 2 con o muc " << k << " co " << dem << " node.";
				cout << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 15)
		{
			if (t.root != NULL)
			{
				int tong = sum_TNodeInt_Duong(t.root);
				cout << "\n\tTong cac node duong trong cay la:" << tong << endl;
				tong = sum_TNodeInt_Am(t.root);
				cout << "\n\tTong cac node am trong cay la:" << tong << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 16)
		{
			if (t.root != NULL)
			{
				int x;
				cout << "\n\tNhap gia tri x = ";
				cin >> x;
				int min = minDistance(t.root, x);
				cout << "\n\tNode co khoang cach gan nhat voi " << x << " la:" << min << endl;
				int max = maxDistance(t.root, x);
				cout << "\n\tNode co khoang cach xa nhat voi " << x << " la:" << max << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 17)
		{
			if (t.root != NULL)
			{
				int dem = count_TNodeInt(t.root);
				cout << "\n\tCo " << dem << " node trong cay.(De quy)";
				dem = count_TNodeInt_KhuDQ(t.root);
				cout << "\n\tCo " << dem << " node trong cay.(Khu de quy)" << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 18)
		{
			if (t.root != NULL)
			{
				int dem = count_TNodeInt_SNT(t.root);
				if (dem != 0)
					cout << "\n\tCo " << dem << " node la SO NGUYEN TO trong cay." << endl;
				else cout << "\n\tTrong cay khong ton tai node la SO NGUYEN TO!" << endl;
				dem = count_TNodeInt_SCP(t.root);
				if (dem != 0)
					cout << "\n\tCo " << dem << " node la SO CHINH PHUONG trong cay." << endl;
				else cout << "\n\tTrong cay khong ton tai node la SO CHINH PHUONG!" << endl;
				dem = count_TNodeInt_So_Hoan_Thien(t.root);
				if (dem != 0)
					cout << "\n\tCo " << dem << " node la SO HOAN THIEN trong cay." << endl;
				else cout << "\n\tTrong cay khong ton tai node la SO HOAN THIEN!" << endl;
				dem = count_TNodeInt_So_Thinh_Vuong(t.root);
				if (dem != 0)
					cout << "\n\tCo " << dem << " node la SO THINH VUONG trong cay." << endl;
				else cout << "\n\tTrong cay khong ton tai node la SO THINH VUONG!" << endl;
				dem = count_TNodeInt_So_Yeu(t.root);
				if (dem != 0)
					cout << "\n\tCo " << dem << " node la SO YEU trong cay." << endl;
				else cout << "\n\tTrong cay khong ton tai node la SO YEU!" << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 19)
		{
			if (t.root != NULL)
			{
				int tong;
				tong = sum_TNodeInt(t.root);
				cout << "\n\tTong cac node trong cay la:" << tong;
				tong = sum_TNodeInt_KhuDQ(t.root);
				cout << "\n\tTong cac node trong cay la (Khu de quy):" << tong << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 20)
		{
			if (t.root != NULL)
			{
				cout << "\n\tCac node SO HOAN THIEN:";
				show_All_TNodeInt_So_Hoan_Thien(t.root);
				cout << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 21)
		{
			if (t.root != NULL)
			{
				int dem = count_TNodeInt_Leaf_Chan(t.root);
				if (dem == 0)
					cout << "\n\tTrong cay khong ton tai node LA CHAN!" << endl;
				else cout << "\n\tTrong cay co " << dem << " node la LA CHAN." << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 22)
		{
			if (t.root != NULL)
			{
				int dem = count_TNodeInt_1Child_SNT(t.root);
				if (dem == 0)
					cout << "\n\tTrong cay khong ton tai node 1 CON SO NGUYEN TO!" << endl;
				else cout << "\n\tTrong cay co " << dem << " node la NODE 1 CON SO NGUYEN TO." << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 23)
		{
			if (t.root != NULL)
			{
				int dem = count_TNodeInt_2Child_SCP(t.root);
				if (dem == 0)
					cout << "\n\tTrong cay khong ton tai node 2 CON SO CHINH PHUONG!" << endl;
				else cout << "\n\tTrong cay co " << dem << " node la NODE 2 CON SO CHINH PHUONG." << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 24)
		{
			if (t.root != NULL)
			{
				int k;
				do
				{
					cout << "\n\tNhap tang k = ";
					cin >> k;
					if (k < 0)
					{
						cout << "\nVui long nhap k khong am!" << endl;
						system("pause");
					}
				} while (k < 0);
				int dem = count_TNodeInt_Shorter_LevelK(t.root, k);
				cout << "\n\tTrong cay co " << dem << " node o tang thap hon tang " << k << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 25)
		{
			if (t.root != NULL)
			{
				int k;
				do
				{
					cout << "\n\tNhap tang k = ";
					cin >> k;
					if (k < 0)
					{
						cout << "\nVui long nhap k khong am!" << endl;
						system("pause");
					}
				} while (k < 0);
				int dem = count_TNodeInt_Taller_LevelK(t.root, k);
				cout << "\n\tTrong cay co " << dem << " node o tang cao hon tang " << k << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 26)
		{
			if (t.root != NULL)
			{
				int tong = sum_TNodeInt_Le(t.root);
				cout << "\n\tTong cac node le = " << tong << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 27)
		{
			if (t.root != NULL)
			{
				bool kt = KiemTra_CayNhiPhanTimKiem(t.root);
				if (kt == true)
					cout << "\n\tCay hien tai la cay nhi phan tim kiem." << endl;
				else cout << "\n\tCay khong phai la cay nhi phan tim kiem!" << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else
		{
			cout << "\n\tNhap chuc nang cho chinh xac!" << endl;
		}
		system("pause");
	}
}

void DocFile_SoNguyen(BST_Int &t, char filename[])
{
	ifstream In;
	In.open(filename, ios_base::in);
	if (!In)
	{
		cout << "\nLoi mo file de doc";
		return;
	}
	while (In.eof() == false)
	{
		int data;
		In >> data;
		In.ignore();
		TNode_Int* them = create_TNodeInt(data);
		insert_TNodeInt(t.root, them);
	}
	In.close();
}

void traverseBreadthNLR(TNode_Int *root)
{
	if (root == NULL)
		return;
	queue <TNode_Int *> q;
	q.push(root);
	while (q.empty() == false)
	{
		TNode_Int *p;
		p = q.front();
		q.pop();
		show_TNodeInt(p);
		if (p->left != NULL)
			q.push(p->left);
		if (p->right != NULL)
			q.push(p->right);
	}
}
void traverseBreadthNRL(TNode_Int *root)
{
	if (root == NULL)
		return;
	queue <TNode_Int *> q;
	q.push(root);
	while (q.empty() == false)
	{
		TNode_Int *p;
		p = q.front();
		q.pop();
		show_TNodeInt(p);
		if (p->right != NULL)
			q.push(p->right);
		if (p->left != NULL)
			q.push(p->left);
	}
}

void traverseDepthNLR(TNode_Int *root)
{
	if (root == NULL)
		return;
	stack <TNode_Int *> s;
	s.push(root);
	while (s.empty() == false)
	{
		TNode_Int *p;
		p = s.top();
		s.pop();
		show_TNodeInt(p);
		// đưa con phải vào stack trước để xử lý con trái trước
		if (p->right != NULL)
			s.push(p->right);
		if (p->left != NULL)
			s.push(p->left);
	}
}
void traverseDepthNRL(TNode_Int *root)
{
	if (root == NULL)
		return;
	stack <TNode_Int *> s;
	s.push(root);
	while (s.empty() == false)
	{
		TNode_Int *p;
		p = s.top();
		s.pop();
		show_TNodeInt(p);
		if (p->left != NULL)
			s.push(p->left);
		if (p->right != NULL)
			s.push(p->right);
	}
}
void traverseDepthLNR(TNode_Int *root);
void traverseDepthRNL(TNode_Int *root);
void traverseDepthLRN(TNode_Int *root);
void traverseDepthRLN(TNode_Int *root);

TNode_Int* find_TNodeInt(TNode_Int* root, int x)
{
	if (root == NULL)
		return NULL;
	if (root->data == x)
		return root;
	if (root->data < x)
		return find_TNodeInt(root->right, x);
	return find_TNodeInt(root->left, x);
}

bool delete_TNodeInt_X(TNode_Int *&root, int x)
{
	if (root == NULL)
		return false;
	if (root->data < x)
		delete_TNodeInt_X(root->right, x);
	else if (root->data > x)
		delete_TNodeInt_X(root->left, x);
	else
	{
		TNode_Int *del = root;
		if (root->left == NULL)
			root = root->right;
		else if (root->right == NULL)
			root = root->left;
		else if (root->left != NULL && root->right != NULL)
		{
			del = find_TNodeInt_Replace(root);
		}
		delete del;
		return true;
	}
}
TNode_Int* find_TNodeInt_Replace(TNode_Int *&p)
{
	TNode_Int* fa = p, *replace = p->right;
	while (replace->left != NULL)
	{
		fa = replace;
		replace = replace->left;
	}
	p->data = replace->data;
	if (fa == p) // trường hợp cây con phải không có con trái
		fa->right = replace->right;
	else fa->left = replace->right;
	return replace;
}

int dem_TNodeInt_Lon_Hon_X(TNode_Int *root, int x)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (root->data <= x)
		dem += dem_TNodeInt_Lon_Hon_X(root->right, x);
	else
	{
		dem++;
		dem += dem_TNodeInt_Lon_Hon_X(root->right, x);
		dem += dem_TNodeInt_Lon_Hon_X(root->left, x);
	}
	return dem;
}
int dem_TNodeInt_Nho_Hon_X(TNode_Int *root, int x)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (root->data >= x)
		dem += dem_TNodeInt_Nho_Hon_X(root->left, x);
	else
	{
		dem++;
		dem += dem_TNodeInt_Nho_Hon_X(root->right, x);
		dem += dem_TNodeInt_Nho_Hon_X(root->left, x);
	}
	return dem;
}
int dem_TNodeInt_Trong_Khoang_XY(TNode_Int *root, int x, int y)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (root->data > y)
		dem += dem_TNodeInt_Trong_Khoang_XY(root->left, x, y);
	else if (root->data < x)
		dem += dem_TNodeInt_Trong_Khoang_XY(root->right, x, y);
	else
	{
		dem++;
		dem += dem_TNodeInt_Trong_Khoang_XY(root->right, x, y);
		dem += dem_TNodeInt_Trong_Khoang_XY(root->left, x, y);
	}
	return dem;
}

TNode_Int* find_TNodeInt_Max(TNode_Int *root)
{
	if (root == NULL)
		return NULL;
	TNode_Int* node = root;
	while (node->right != NULL)
		node = node->right;
	return node;
}
TNode_Int* find_TNodeInt_Min(TNode_Int *root)
{
	if (root == NULL)
		return NULL;
	TNode_Int* node = root;
	while (node->left != NULL)
		node = node->left;
	return node;
}

void show_TNodeInt_MucK(TNode_Int *root, int k, int &dem)
{
	if (root == NULL)
		return;
	if (k == 0)
	{
		show_TNodeInt(root);
		dem++;
	}
	else
	{
		k--;
		show_TNodeInt_MucK(root->left, k, dem);
		show_TNodeInt_MucK(root->right, k, dem);
	}
}
void show_TNodeIntLeaf_MucK(TNode_Int *root, int k, int &dem)
{
	if (root == NULL)
		return;
	if (k == 0)
	{
		if (root->left == NULL && root->right == NULL)
		{
			show_TNodeInt(root);
			dem++;
		}
	}
	else
	{
		k--;
		show_TNodeIntLeaf_MucK(root->left, k, dem);
		show_TNodeIntLeaf_MucK(root->right, k, dem);
	}
}
void show_TNodeInt1Child_MucK(TNode_Int *root, int k, int &dem)
{
	if (root == NULL)
		return;
	if (k == 0)
	{
		if ((root->left == NULL && root->right != NULL) || (root->left != NULL && root->right == NULL))
		{
			show_TNodeInt(root);
			dem++;
		}
	}
	else
	{
		k--;
		show_TNodeInt1Child_MucK(root->left, k, dem);
		show_TNodeInt1Child_MucK(root->right, k, dem);
	}
}
void show_TNodeInt2Child_MucK(TNode_Int *root, int k, int &dem)
{
	if (root == NULL)
		return;
	if (k == 0)
	{
		if (root->left != NULL && root->right != NULL)
		{
			show_TNodeInt(root);
			dem++;
		}
	}
	else
	{
		k--;
		show_TNodeInt2Child_MucK(root->left, k, dem);
		show_TNodeInt2Child_MucK(root->right, k, dem);
	}
}

int count_TNodeInt_MucK(TNode_Int *root, int k)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (k == 0)
	{
		dem++;
	}
	else
	{
		k--;
		dem += count_TNodeInt_MucK(root->left, k);
		dem += count_TNodeInt_MucK(root->right, k);
	}
	return dem;
}
int count_TNodeInt1Child_MucK(TNode_Int *root, int k)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (k == 0)
	{
		if ((root->left == NULL && root->right != NULL) || (root->left != NULL && root->right == NULL))
			return 1;
	}
	else
	{
		k--;
		dem += count_TNodeInt1Child_MucK(root->left, k);
		dem += count_TNodeInt1Child_MucK(root->right, k);
	}
	return dem;
}
int count_TNodeInt2Child_MucK(TNode_Int *root, int k)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (k == 0)
	{
		if (root->left != NULL && root->right != NULL)
			return 1;
	}
	else
	{
		k--;
		dem += count_TNodeInt2Child_MucK(root->left, k);
		dem += count_TNodeInt2Child_MucK(root->right, k);
	}
	return dem;
}

int sum_TNodeInt_Duong(TNode_Int *root)
{
	if (root == NULL)
		return 0;
	int tong = 0;
	if (root->data > 0)
		tong += root->data;
	tong += sum_TNodeInt_Duong(root->left);
	tong += sum_TNodeInt_Duong(root->right);
	return tong;
}
int sum_TNodeInt_Am(TNode_Int *root)
{
	if (root == NULL)
		return 0;
	int tong = 0;
	if (root->data < 0)
		tong += root->data;
	tong += sum_TNodeInt_Am(root->left);
	tong += sum_TNodeInt_Am(root->right);
	return tong;
}

int maxDistance(TNode_Int *root, int x)
{
	if (root == NULL)
		return -1;
	TNode_Int* minleft = find_TNodeInt_Min(root);
	TNode_Int* maxright = find_TNodeInt_Max(root);
	int disleft = abs(x - minleft->data);
	int disright = abs(x - maxright->data);
	if (disleft > disright)
		return minleft->data;
	else return maxright->data;
}
int minDistance(TNode_Int *root, int x)
{
	if (root == NULL)
		return -1;
	int min = root->data;
	int mindis = abs(x - min);
	while (root != NULL)
	{
		if (root->data == x)
			return x;
		if (mindis > abs(x - root->data))
		{
			min = root->data;
			mindis = abs(x - min);
		}
		if (root->data < x)
			root = root->right;
		else root = root->left;
	}
	return min;
}

int count_TNodeInt(TNode_Int *root)
{
	if (root == NULL)
		return 0;
	int dem = 1;
	dem += count_TNodeInt(root->left);
	dem += count_TNodeInt(root->right);
	return dem;
}
int count_TNodeInt_KhuDQ(TNode_Int *root)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	stack <TNode_Int *> s;
	s.push(root);
	while (s.empty() == false)
	{
		dem++;
		TNode_Int *p = s.top();
		s.pop();
		if (p->right != NULL)
			s.push(p->right);
		if (p->left != NULL)
			s.push(p->left);
	}
	return dem;
}

bool KiemTra_SNT(int x)
{
	if (x < 2)
		return false;
	int tam = (int)sqrt((float)x);
	for (int i = 2; i <= tam; i++)
	{
		if (x%i == 0)
			return false;
	}
	return true;
}
bool KiemTra_SCP(int x)
{
	float tam = sqrt((float)x);
	if (tam == (int)tam)
		return true;
	return false;
}
/* Số hoàn thiện là số có tổng các ước số của nó (không kể nó) thì BẰNG CHÍNH NÓ*/
bool KiemTra_So_Hoan_Thien(int x)
{
	if (x < 0)
		return false;
	int tong = 0;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
			tong += i;
	}
	if (tong == x)
		return true;
	return false;
}
/* Số thịnh vượng là số có tổng các ước số của nó (không kể nó) thì LỚN HƠN NÓ*/
bool KiemTra_So_Thinh_Vuong(int x)
{
	if (x < 0)
		return false;
	int tong = 0;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
			tong += i;
	}
	if (tong > x)
		return true;
	return false;
}
/* Số yếu là số có tổng các ước số của nó (không kể nó) thì NHỎ HƠN NÓ */
bool KiemTra_So_Yeu(int x)
{
	if (x < 0)
		return false;
	int tong = 0;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
			tong += i;
	}
	if (tong < x)
		return true;
	return false;
}

int count_TNodeInt_SNT(TNode_Int *root)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (KiemTra_SNT(root->data) == true)
		dem++;
	dem += count_TNodeInt_SNT(root->left);
	dem += count_TNodeInt_SNT(root->right);
	return dem;
}
int count_TNodeInt_SCP(TNode_Int *root)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (KiemTra_SCP(root->data) == true)
		dem++;
	dem += count_TNodeInt_SCP(root->left);
	dem += count_TNodeInt_SCP(root->right);
	return dem;
}
int count_TNodeInt_So_Hoan_Thien(TNode_Int *root)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (KiemTra_So_Hoan_Thien(root->data) == true)
		dem++;
	dem += count_TNodeInt_So_Hoan_Thien(root->left);
	dem += count_TNodeInt_So_Hoan_Thien(root->right);
	return dem;
}
int count_TNodeInt_So_Thinh_Vuong(TNode_Int *root)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (KiemTra_So_Thinh_Vuong(root->data) == true)
		dem++;
	dem += count_TNodeInt_So_Thinh_Vuong(root->left);
	dem += count_TNodeInt_So_Thinh_Vuong(root->right);
	return dem;
}
int count_TNodeInt_So_Yeu(TNode_Int *root)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (KiemTra_So_Yeu(root->data) == true)
		dem++;
	dem += count_TNodeInt_So_Yeu(root->left);
	dem += count_TNodeInt_So_Yeu(root->right);
	return dem;
}

int sum_TNodeInt(TNode_Int *root)
{
	if (root == NULL)
		return 0;
	int tong = 0;
	tong += root->data;
	tong += sum_TNodeInt(root->left);
	tong += sum_TNodeInt(root->right);
	return tong;
}
int sum_TNodeInt_KhuDQ(TNode_Int *root)
{
	if (root == NULL)
		return 0;
	stack <TNode_Int *> s;
	s.push(root);
	int tong = 0;
	while (s.empty() == false)
	{
		TNode_Int *p = s.top();
		s.pop();
		tong += p->data;
		if (p->right != NULL)
			s.push(p->right);
		if (p->left != NULL)
			s.push(p->left);
	}
	return tong;
}

// ========================== BÀI 3 ========================== \\

void show_All_TNodeInt_So_Hoan_Thien(TNode_Int* root)
{
	if (root == NULL)
		return;
	if (KiemTra_So_Hoan_Thien(root->data) == true)
		show_TNodeInt(root);
	show_All_TNodeInt_So_Hoan_Thien(root->left);
	show_All_TNodeInt_So_Hoan_Thien(root->right);
}
int count_TNodeInt_Leaf_Chan(TNode_Int* root)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (root->left == NULL && root->right == NULL && root->data % 2 == 0)
		dem++;
	dem += count_TNodeInt_Leaf_Chan(root->left);
	dem += count_TNodeInt_Leaf_Chan(root->right);
	return dem;
}
int count_TNodeInt_1Child_SNT(TNode_Int* root)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (((root->left != NULL && root->right == NULL) || (root->left == NULL && root->right != NULL)) && KiemTra_SNT(root->data) == true)
		dem++;
	dem += count_TNodeInt_1Child_SNT(root->left);
	dem += count_TNodeInt_1Child_SNT(root->right);
	return dem;
}
int count_TNodeInt_2Child_SCP(TNode_Int* root)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (root->left != NULL && root->right != NULL && KiemTra_SCP(root->data) == true)
		dem++;
	dem += count_TNodeInt_2Child_SCP(root->left);
	dem += count_TNodeInt_2Child_SCP(root->right);
	return dem;
}
int count_TNodeInt_Shorter_LevelK(TNode_Int* root, int k)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (k == 0)
		return dem;
	if (k > 0)
		dem++;
	k--;
	dem += count_TNodeInt_Shorter_LevelK(root->left, k);
	dem += count_TNodeInt_Shorter_LevelK(root->right, k);
	return dem;
}
int count_TNodeInt_Taller_LevelK(TNode_Int* root, int k)
{
	if (root == NULL)
		return 0;
	int dem = 0;
	if (k < 0)
		dem++;
	k--;
	dem += count_TNodeInt_Taller_LevelK(root->left, k);
	dem += count_TNodeInt_Taller_LevelK(root->right, k);
	return dem;
}
int sum_TNodeInt_Le(TNode_Int* root)
{
	if (root == NULL)
		return 0;
	int tong = 0;
	if (root->data % 2 != 0)
		tong += root->data;
	tong += sum_TNodeInt_Le(root->left);
	tong += sum_TNodeInt_Le(root->right);
	return tong;
}
bool KiemTra_CayNhiPhanTimKiem(TNode_Int* root)
{
	if (root == NULL)
		return true;
	if (root->left != NULL && root->right != NULL)
	{
		if (root->data < root->left->data || root->data > root->right->data)
			return false;
	}
	bool kt_left = KiemTra_CayNhiPhanTimKiem(root->left);
	bool kt_right = KiemTra_CayNhiPhanTimKiem(root->right);
	if (kt_left == false || kt_right == false)
		return false;
	return true;
}

// ========================== BÀI 2 ========================== \\

void Xu_Ly_Bai2()
{
	int luachon;
	BST_PS t;
	init_BSTPS(t);
	while (true)
	{
		system("cls");
		cout << "\n\t\t\t\t ------------------- MUNU BAI2 -------------------";
		cout << "\n\t\t1. Doc file phan so.";
		cout << "\n\t\t2. Tao ngau nhien 1 node phan so.";
		cout << "\n\t\t3. Duyet cay.";
		cout << "\n\t\t4. Them 1 node phan so vao cay.";
		cout << "\n\t\t5. Tim 1 node phan so co trong cay khong.";
		cout << "\n\t\t6. Xoa 1 phan so x trong cay.";
		cout << "\n\t\t7. Xoa nhung phan so lon hon 2.";
		cout << "\n\t\t8. Xoa nhung phan so co mau la so nguyen to.";
		cout << "\n\t\t9. Tinh tong cac phan so.";
		cout << "\n\t\t10. Tim phan so nho/lon nhat.";
		cout << "\n\t\t11. Liet ke cac phan so co tu lon hon mau.";
		cout << "\n\t\t12. Liet ke cac phan so co tu nho hon mau.";
		cout << "\n\t\t13. Liet ke cac phan so co tu va mau la so nguyen to.";
		cout << "\n\t\t14. Liet ke cac phan so o muc k.";
		cout << "\n\t\t0. Thoat.";
		cout << "\n\t\t\t\t -------------------------------------------------";
		cout << "\n\tNhap lua chon:"; cin >> luachon;

		if (luachon == 0)
		{
			delete_BSTPS(t.root);
			break;
		}
		else if (luachon == 1)
		{
			DocFile_PhanSo(t.root, "PhanSo.txt");
			cout << "\n\tDa hoan thanh thao tac doc file." << endl;
		}
		else if (luachon == 2)
		{
			srand(time(NULL));
			PS ps;
			bool kt;
			do
			{
				ps.tu = rand() % 101 - 50;
				ps.mau = rand() % 101 - 50;
				Chuan_Dau_PS(ps);
				TNode_PS *them = create_TNodePS(ps);
				kt = insert_TNodePS(t.root, them);
			} while (kt == false);
			cout << "\n\tNode vua them la:" << ps.tu << "/" << ps.mau << endl;
		}
		else if (luachon == 3)
		{
			if (t.root != NULL)
			{
				cout << "\n\t\t\t\tDUYET CAY\n";
				cout << "\n\tNLR:"; traverseNLR_BSTPS(t.root);
				cout << "\n\tNRL:"; traverseNRL_BSTPS(t.root);
				cout << "\n\tLNR:"; traverseLNR_BSTPS(t.root);
				cout << "\n\tRNL:"; traverseRNL_BSTPS(t.root);
				cout << "\n\tLRN:"; traverseLRN_BSTPS(t.root);
				cout << "\n\tRLN:"; traverseRLN_BSTPS(t.root);
				cout << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 4)
		{
			PS ps;
			nhap_PS(ps);
			TNode_PS *them = create_TNodePS(ps);
			bool kt = insert_TNodePS(t.root, them);
			if (kt == true)
				cout << "\n\tThem thanh cong." << endl;
			else cout << "\n\tThem that bai!" << endl;
		}
		else if (luachon == 5)
		{
			if (t.root != NULL)
			{
				PS ps;
				cout << "\n\t\t\tNHAP PHAN SO CAN TIM KIEM\n";
				cout << "\n\tNhap tu:";
				cin >> ps.tu;
				do
				{
					cout << "\n\tNhap mau:";
					cin >> ps.mau;
					if (ps.mau == 0)
					{
						cout << "\nVui long nhap mau so khac 0!" << endl;
						system("pause");
					}
				} while (ps.mau == 0);
				TNode_PS* tam = find_TNodePS(t.root, ps);
				if (tam == NULL)
					cout << "\n\tPhan so " << ps.tu << "/" << ps.mau << " khong ton tai!" << endl;
				else cout << "\n\tPhan so " << ps.tu << "/" << ps.mau << " ton tai." << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 6)
		{
			if (t.root != NULL)
			{
				PS ps;
				cout << "\n\t\t\tNHAP PHAN SO CAN XOA\n";
				cout << "\n\tNhap tu:";
				cin >> ps.tu;
				do
				{
					cout << "\n\tNhap mau:";
					cin >> ps.mau;
					if (ps.mau == 0)
					{
						cout << "\nVui long nhap mau so khac 0!" << endl;
						system("pause");
					}
				} while (ps.mau == 0);
				bool kt = delete_TNodePS_X(t.root, ps);
				if (kt == false)
					cout << "\n\tXoa khong thanh cong!" << endl;
				else cout << "\n\tXoa thanh cong." << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 7)
		{
			if (t.root != NULL)
			{
				delete_All_TNodePS_Bigger_2(t.root);
				cout << "\n\tVua thuc hien xoa cac phan so lon hon 2." << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 8)
		{
			if (t.root != NULL)
			{
				delete_All_TNodePS_Mau_SNT(t.root);
				cout << "\n\tVua thuc hien xoa cac phan so co mau la so nguyen to." << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 9)
		{
			if (t.root != NULL)
			{
				PS tong = sum_TNodePS(t.root);
				cout << "\n\tTong cac phan so la:" << tong.tu << "/" << tong.mau << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 10)
		{
			if (t.root != NULL)
			{
				TNode_PS* tam = find_PS_Min(t.root);
				cout << "\n\tPhan so min la:" << tam->data.tu << "/" << tam->data.mau << endl;
				tam = find_PS_Max(t.root);
				cout << "\n\tPhan so max la:" << tam->data.tu << "/" << tam->data.mau << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 11)
		{
			if (t.root != NULL)
			{
				cout << "\n\tCac phan so co TU LON HON MAU la:";
				show_All_PS_Tu_Bigger_Mau(t.root);
				cout << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 12)
		{
			if (t.root != NULL)
			{
				cout << "\n\tCac phan so co TU NHO HON MAU la:";
				show_All_PS_Tu_Smaller_Mau(t.root);
				cout << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 13)
		{
			if (t.root != NULL)
			{
				cout << "\n\tCac phan so co tu va mau la SO NGUYEN TO:";
				show_All_PS_TuMau_SNT(t.root);
				cout << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else if (luachon == 14)
		{
			if (t.root != NULL)
			{
				int k;
				do
				{
					cout << "\n\tNhap muc k = ";
					cin >> k;
					if (k < 0)
					{
						cout << "\n\tNhap muc k lon hon hoac bang 0!" << endl;
						system("pause");
					}
				} while (k < 0);
				cout << "\n\tCac phan so MUC " << k << ":";
				show_All_PS_Level_K(t.root, k);
				cout << endl;
			}
			else cout << "\n\tBinary Search Tree empty!" << endl;
		}
		else
		{
			cout << "\n\tNhap lua chon cho chinh xac!" << endl;
		}
		system("pause");
	}
}
void nhap_PS(PS &ps)
{
	cout << "\n\t\t\tNHAP PHAN SO\n";
	cout << "\n\tNhap gia tri tu so:";
	cin >> ps.tu;
	do
	{
		cout << "\n\tNhap gia tri mau so:";
		cin >> ps.mau;
		if (ps.mau == 0)
		{
			cout << "\nVui long nhap mau khac 0!" << endl;
			system("pause");
		}
	} while (ps.mau == 0);
	Chuan_Dau_PS(ps);
}
void Chuan_Dau_PS(PS &ps)
{
	if (ps.mau < 0)
	{
		ps.tu *= (-1);
		ps.mau *= (-1);
	}
}

// so sánh 2 phân số: 1 - s1>s2 , -1 - s1<s2 , 0 - s1 = s2
int So_Sanh_PS(PS s1, PS s2)
{
	int ps1 = s1.tu * s2.mau;
	int ps2 = s2.tu * s1.mau;
	if (ps1 > ps2)
		return 1;
	if (ps1 < ps2)
		return -1;
	return 0;
}
void DocFile_PhanSo(TNode_PS *&root, char filename[])
{
	ifstream In;
	In.open(filename, ios_base::in);
	if (!In)
	{
		cout << "\n\tLoi mo file de doc!" << endl;
		return;
	}
	while (In.eof() == false)
	{
		PS ps;
		In >> ps.tu;
		In.ignore();
		In >> ps.mau;
		In.ignore();
		Chuan_Dau_PS(ps);
		TNode_PS* them = create_TNodePS(ps);
		insert_TNodePS(root, them);
	}
}
void init_BSTPS(BST_PS &t)
{
	t.root = NULL;
}
TNode_PS* create_TNodePS(PS data)
{
	TNode_PS *p = new TNode_PS;
	if (p == NULL)
	{
		cout << "\n\tKhong du bo nho de cap phat!" << endl;
		return NULL;
	}
	p->data = data;
	p->left = NULL;
	p->right = NULL;
	return p;
}
bool insert_TNodePS(TNode_PS *&root, TNode_PS *them)
{
	if (them == NULL)
		return false;
	if (root == NULL)
	{
		root = them;
		return true;
	}
	else
	{
		int tam = So_Sanh_PS(root->data, them->data);
		if (tam == 1)
			return insert_TNodePS(root->left, them);
		else if (tam == -1)
			return insert_TNodePS(root->right, them);
		else return false;
	}
}
void show_TNodePS(TNode_PS *node)
{
	if (node != NULL)
		cout << "\t" << node->data.tu << "/" << node->data.mau;
}

void traverseNLR_BSTPS(TNode_PS *root)
{
	if (root == NULL)
		return;
	show_TNodePS(root);
	traverseNLR_BSTPS(root->left);
	traverseNLR_BSTPS(root->right);
}
void traverseNRL_BSTPS(TNode_PS *root)
{
	if (root == NULL)
		return;
	show_TNodePS(root);
	traverseNRL_BSTPS(root->right);
	traverseNRL_BSTPS(root->left);
}
void traverseLNR_BSTPS(TNode_PS *root)
{
	if (root == NULL)
		return;
	traverseLNR_BSTPS(root->left);
	show_TNodePS(root);
	traverseLNR_BSTPS(root->right);
}
void traverseRNL_BSTPS(TNode_PS *root)
{
	if (root == NULL)
		return;
	traverseRNL_BSTPS(root->right);
	show_TNodePS(root);
	traverseRNL_BSTPS(root->left);
}
void traverseLRN_BSTPS(TNode_PS *root)
{
	if (root == NULL)
		return;
	traverseLRN_BSTPS(root->left);
	traverseLRN_BSTPS(root->right);
	show_TNodePS(root);
}
void traverseRLN_BSTPS(TNode_PS *root)
{
	if (root == NULL)
		return;
	traverseRLN_BSTPS(root->right);
	traverseRLN_BSTPS(root->left);
	show_TNodePS(root);
}
void delete_BSTPS(TNode_PS *&root)
{
	if (root == NULL)
		return;
	delete_BSTPS(root->left);
	delete_BSTPS(root->right);
	delete root;
}


TNode_PS* find_TNodePS(TNode_PS* root, PS ps)
{
	if (root == NULL)
		return NULL;
	if (root->data.tu == ps.tu && root->data.mau == ps.mau)
		return root;
	if (root->data.tu * ps.mau > ps.tu * root->data.mau)
		return find_TNodePS(root->left, ps);
	return find_TNodePS(root->right, ps);
}

bool delete_TNodePS_X(TNode_PS *&root, PS x)
{
	if (root == NULL)
		return false;
	if (root->data.tu * x.mau > x.tu * root->data.mau)
		return delete_TNodePS_X(root->left, x);
	if (root->data.tu * x.mau < x.tu * root->data.mau)
		return delete_TNodePS_X(root->right, x);
	TNode_PS *tam = root;
	if (root->left == NULL)
		root = root->right;
	else if (root->right == NULL)
		root = root->left;
	else if (root->left != NULL && root->right != NULL)
	{
		tam = find_TNodePS_Replace(root);
	}
	delete tam;
	return true;
}
TNode_PS* find_TNodePS_Replace(TNode_PS *&p)
{
	TNode_PS *fa = p, *replace = p->right;
	while (replace->left != NULL)
	{
		fa = replace;
		replace = replace->left;
	}
	p->data = replace->data;
	if (fa == p)
		fa->right = replace->right;
	else fa->left = replace->right;
	return replace;
}

void delete_All_TNodePS_Bigger_2(TNode_PS *&root)
{
	if (root == NULL)
		return;
	while (true)
	{
		if (root == NULL)
			return;
		if (root->data.mau < 0)
		{
			if (root->data.tu * (-1) > root->data.mau * (-2))
				delete_TNodePS_X(root, root->data);
			else break;
		}
		else
		{
			if (root->data.tu > root->data.mau * 2)
				delete_TNodePS_X(root, root->data);
			else break;
		}
	}
	delete_All_TNodePS_Bigger_2(root->left);
	delete_All_TNodePS_Bigger_2(root->right);
}
void delete_All_TNodePS_Mau_SNT(TNode_PS *&root)
{
	if (root == NULL)
		return;
	while (true)
	{
		if (root == NULL)
			return;
		if (KiemTra_SNT(root->data.mau) == true)
			delete_TNodePS_X(root, root->data);
		else break;
	}
	delete_All_TNodePS_Mau_SNT(root->left);
	delete_All_TNodePS_Mau_SNT(root->right);
}
PS sum_TNodePS(TNode_PS *root)
{
	PS tong;
	tong.tu = 0;
	tong.mau = 1;
	if (root == NULL)
		return tong;
	tong.tu = tong.tu * root->data.mau + root->data.tu * tong.mau;
	tong.mau *= root->data.mau;
	PS sum_left = sum_TNodePS(root->left);
	PS sum_right = sum_TNodePS(root->right);
	tong.tu = tong.tu * sum_left.mau + sum_left.tu * tong.mau;
	tong.mau *= sum_left.mau;
	tong.tu = tong.tu * sum_right.mau + sum_right.tu * tong.mau;
	tong.mau *= sum_right.mau;
	return tong;
}
TNode_PS* find_PS_Min(TNode_PS *root)
{
	if (root == NULL)
		return NULL;
	TNode_PS* node = root;
	while (node->left != NULL)
		node = node->left;
	return node;
}
TNode_PS* find_PS_Max(TNode_PS *root)
{
	if (root == NULL)
		return NULL;
	TNode_PS* node = root;
	while (node->right != NULL)
		node = node->right;
	return node;
}
void show_All_PS_Tu_Bigger_Mau(TNode_PS *root)
{
	if (root == NULL)
		return;
	if (root->data.mau > 0)
	{
		if (root->data.tu > root->data.mau)
			show_TNodePS(root);
	}
	show_All_PS_Tu_Bigger_Mau(root->left);
	show_All_PS_Tu_Bigger_Mau(root->right);
}
void show_All_PS_Tu_Smaller_Mau(TNode_PS *root)
{
	if (root == NULL)
		return;
	if (root->data.mau > 0)
	{
		if (root->data.tu < root->data.mau)
			show_TNodePS(root);
	}
	show_All_PS_Tu_Smaller_Mau(root->left);
	show_All_PS_Tu_Smaller_Mau(root->right);
}
void show_All_PS_TuMau_SNT(TNode_PS *root)
{
	if (root == NULL)
		return;
	if (KiemTra_SNT(root->data.tu) == true && KiemTra_SNT(root->data.mau) == true)
		show_TNodePS(root);
	show_All_PS_TuMau_SNT(root->left);
	show_All_PS_TuMau_SNT(root->right);
}
void show_All_PS_Level_K(TNode_PS *root, int k)
{
	if (root == NULL)
		return;
	if (k == 0)
	{
		show_TNodePS(root);
		return;
	}
	k--;
	show_All_PS_Level_K(root->left, k);
	show_All_PS_Level_K(root->right, k);
}

// ========================== BÀI 4 ========================== \\

//Cây Nhị Phân Tìm Kiếm: Từ điển Anh-Việt, word-mean. Word là khóa

void Xu_Ly_Bai4()
{
	int luachon;
	BST_TuDien td;
	init_BST_TuDien(td);
	while (true)
	{
		system("cls");
		cout << "\n\t\t\t\t\t --------------------------- MENU BAI4 ---------------------------";
		cout << "\n\t\t\t1. Doc file Tu Dien.";
		cout << "\n\t\t\t2. Duyet Tu Dien LNR.";
		cout << "\n\t\t\t3. Them 1 tu vao cay.";
		cout << "\n\t\t\t4. Xoa 1 tu trong cay.";
		cout << "\n\t\t\t5. Tra cuu nghia cua 1 tu.";
		cout << "\n\t\t\t6. Chinh sua nghia cua 1 tu.";
		cout << "\n\t\t\t0. Thoat.";
		cout << "\n\t\t\t\t\t -----------------------------------------------------------------";
		cout << "\n\t\tNhap lua chon:";
		cin >> luachon;

		rewind(stdin);
		if (luachon == 0)
		{
			delete_BST_TuDien(td.root);
			break;
		}
		else if (luachon == 1)
		{
			DocFile_TuDien(td.root, "TuDien.txt");
			cout << "\n\tDa hoan thanh thao tac." << endl;
		}
		else if (luachon == 2)
		{
			if (td.root != NULL)
			{
				cout << "\n\t\tDANH SACH TU DIEN\n";
				traverseLNR_BST_TuDien(td.root);
			}
			else cout << "\nTu Dien rong!" << endl;
		}
		else if (luachon == 3)
		{
			string word, mean;
			cout << "\n\tNhap tu English:";
			getline(cin, word);
			cout << "\n\tNhap nghia Vietnamese:";
			getline(cin, mean);
			Node_TuDien* them = create_Node_TuDien(word, mean);
			bool kt = insert_Node_TuDien(td.root, them);
			if (kt == true)
			{
				cout << "\n\tThem thanh cong." << endl;
				cout << "\n\t\tDANH SACH TU DIEN SAU KHI THEM\n";
				traverseLNR_BST_TuDien(td.root);
			}
			else cout << "\n\tThem that bai!" << endl;
		}
		else if (luachon == 4)
		{
			if (td.root != NULL)
			{
				string word;
				cout << "\n\tNhap tu English muon xoa:";
				getline(cin, word);
				bool kt = delete_Node_TuDien(td.root, word);
				if (kt == true)
					cout << "\n\tXoa thanh cong." << endl;
				else cout << "\n\tXoa that bai!" << endl;
				cout << "\n\t\tDANH SACH TU DIEN SAU KHI XOA\n";
				traverseLNR_BST_TuDien(td.root);
			}
			else cout << "\nTu Dien rong!" << endl;
		}
		else if (luachon == 5)
		{
			if (td.root != NULL)
			{
				string word;
				cout << "\n\tNhap tu English muon tra cuu:";
				getline(cin, word);
				Node_TuDien* find = find_Node_TuDien(td.root, word);
				if (find == NULL)
					cout << "\nTu " << word << " khong ton tai!" << endl;
				else cout << "\n\t" << word << " -- " << find->mean << endl;
			}
			else cout << "\nTu Dien rong!" << endl;
		}
		else if (luachon == 6)
		{
			if (td.root != NULL)
			{
				string word;
				cout << "\n\tNhap tu English muon tra cuu:";
				getline(cin, word);
				Node_TuDien* find = find_Node_TuDien(td.root, word);
				if (find == NULL)
					cout << "\nTu " << word << " khong ton tai!" << endl;
				else
				{
					cout << "\n\t" << word << " -- " << find->mean << endl;
					string mean;
					cout << "\n\tNhap nghia Vietnamese muon sua:";
					getline(cin, mean);
					find->mean = mean;
					cout << "\n\t\tDANH SACH TU DIEN SAU KHI CHINH SUA\n";
					traverseLNR_BST_TuDien(td.root);
				}
			}
			else cout << "\nTu Dien rong!" << endl;
		}
		else
		{
			cout << "\nVui long nhap chuc nang cho chinh xac!" << endl;
		}
		system("pause");
	}
}
void DocFile_TuDien(Node_TuDien *&root, char filename[])
{
	ifstream In;
	In.open(filename, ios_base::in);
	if (!In)
	{
		cout << "\nLoi mo file de doc!" << endl;
		return;
	}
	while (In.eof() == false)
	{
		string word, mean;
		getline(In, word, '-');
		getline(In, mean, '\n');
		Node_TuDien* them = create_Node_TuDien(word, mean);
		insert_Node_TuDien(root, them);
	}
	In.close();
}
void init_BST_TuDien(BST_TuDien &td)
{
	td.root = NULL;
}
Node_TuDien* create_Node_TuDien(string word, string mean)
{
	Node_TuDien* p = new Node_TuDien;
	if (p == NULL)
	{
		cout << "\nKhong du bo nho de cap phat!" << endl;
		return NULL;
	}
	p->word = word;
	p->mean = mean;
	p->left = NULL;
	p->right = NULL;
	return p;
}
bool insert_Node_TuDien(Node_TuDien *&root, Node_TuDien *them)
{
	if (them == NULL)
		return false;
	if (root == NULL)
	{
		root = them;
		return true;
	}
	if (root->word == them->word)
		return false;
	if (root->word > them->word)
		return insert_Node_TuDien(root->left, them);
	return insert_Node_TuDien(root->right, them);
}
void show_Node_TuDien(Node_TuDien *node)
{
	cout << "\t" << setw(20) << left << node->word << "  --  " << setw(50) << left << node->mean << endl;
}
void traverseLNR_BST_TuDien(Node_TuDien *root)
{
	if (root == NULL)
		return;
	traverseLNR_BST_TuDien(root->left);
	show_Node_TuDien(root);
	traverseLNR_BST_TuDien(root->right);
}
void delete_BST_TuDien(Node_TuDien *&root)
{
	if (root == NULL)
		return;
	delete_BST_TuDien(root->left);
	delete_BST_TuDien(root->right);
	delete root;
}

Node_TuDien* find_Node_TuDien_Replace(Node_TuDien *&p)
{
	Node_TuDien *fa = p, *replace = p->right;
	while (replace->left != NULL)
	{
		fa = replace;
		replace = replace->left;
	}
	p->word = replace->word;
	p->mean = replace->mean;
	if (fa == p)
		fa->right = replace->right;
	else fa->left = replace->right;
	return replace;
}
bool delete_Node_TuDien(Node_TuDien *&root, string word)
{
	if (root == NULL)
		return false;
	if (root->word > word)
		return delete_Node_TuDien(root->left, word);
	if (root->word < word)
		return delete_Node_TuDien(root->right, word);
	Node_TuDien* tam = root;
	if (root->left == NULL)
		root = root->right;
	else if (root->right == NULL)
		root = root->left;
	else if (root->left != NULL && root->right != NULL)
	{
		tam = find_Node_TuDien_Replace(root);
	}
	delete tam;
	return true;
}
Node_TuDien* find_Node_TuDien(Node_TuDien *root, string word)
{
	if (root == NULL)
		return NULL;
	if (root->word == word)
		return root;
	if (root->word > word)
		return find_Node_TuDien(root->left, word);
	return find_Node_TuDien(root->right, word);
}
void Chinh_Sua_Nghia_Node_TuDien(Node_TuDien *&node);
