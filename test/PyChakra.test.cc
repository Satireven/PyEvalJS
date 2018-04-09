#include "../src/interfaces.h"
#include <iostream>

using namespace std;

int main(){
    auto runtime = CreateRuntime();
    auto context = CreateContext(runtime);
    auto res = Eval_JS_File(context, "/Users/droiz/Code/personal/PyChakra/test/js/es6.js");

    cout << res;

    return 0;
}
