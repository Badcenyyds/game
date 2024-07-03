#include <iostream>
#include <math.h>
#include <queue>
#include "mod/web.h"
#include "mod/display.h"
using namespace std;

int main() {
	connect(), checkUpd(), startup();
	while(!loop()) ;
}
