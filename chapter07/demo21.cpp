/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.31: Define a pair of classes X and Y, in which X has a pointer to
** Y, and Y has an object of type X.
*/

class Y;

class X
{
	Y* y = nullptr;
};

class Y
{
	X x;
};

// int main(){
// 	return 0;
// }

/*
**
** @Output

**
*/