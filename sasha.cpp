#include "lib.h"



int main()
{
	int method, n_start = 10000, n_end = 1000000, n_step = 100000;
	float time;
	bool f = true;
	int* arr;

	while (f)
	{
		cout << "start N = " << n_start << " end N = " << n_end << " step N = " << n_step << endl;
		cout << "choose  method to calculate T(n) of func or setting :" << endl;
		cout << "1: insert" << endl;
		cout << "2: delete" << endl;
		cout << "3: search" << endl;
		cout << "4: display" << endl;
		cout << "5: Max sum of subarray" << endl;
		cout << "6: enter start N, end N, step N" << endl;
		cout << "7: exit" << endl;

		cin >> method;

		switch (method)
		{
		case 1:

			system("cls");
			for (int i = n_start; i <= n_end; i += n_step)
			{
				arr=new int[i];
				init_arr(arr, i);
				time = arr_insert(arr, i);
				
				cout << "N: " << i << "   T(N):  " << time << endl;
				delete []arr;
			}

			break;
		case 2:
			system("cls");
			for (int i = n_start; i <= n_end; i += n_step)
			{
				arr = new int[i];
				init_arr(arr, i);
				time = arr_delete(arr, i);

				cout << "N: " << i << "   T(N):  " << time << endl;
				delete[]arr;
			}
			break;
		case 3:
			system("cls");
			for (int i = n_start; i <= n_end; i += n_step)
			{
				arr = new int[i];
				init_arr(arr, i);
				time = arr_search(arr, i);

				cout << "N: " << i << "   T(N):  " << time << endl;
				delete[]arr;
			}
			break;
		case 4:
			system("cls");
			for (int i = n_start; i <= n_end; i += n_step)
			{
				arr = new int[i];
				init_arr(arr, i);
				time=arr_display(arr, i);

				cout << "N: " << i << "   T(N):  " << time << endl;
				delete[]arr;
			}
			break;
		case 5:
			system("cls");
			for (int i = n_start; i <= n_end; i += n_step)
			{
				arr = new int[i];
				init_arr(arr, i);
				time = arr_MaxSubSum1(arr, i);

				cout << "N: " << i << "   T(N):  " << time << endl;
				delete[]arr;
			}
			break;
		case 6:
			cout << "Start N:";
			cin >> n_start;

			cout << "End N:";
			cin >> n_end;

			cout << "Step N:";
			cin >> n_step;
			system("cls");
			break;
		case 7:
			f = false;
			break;
		}
	}
	return 0;
}