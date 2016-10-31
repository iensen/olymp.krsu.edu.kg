#include "testlib.h"
#include<vector>
#include<algorithm>

int main(int argc, char * argv[])
{
  
    setName("compare unordered sequences of signed int%d numbers", 8 * sizeof(int));
    registerTestlibCmd(argc, argv);
   
    int size1 = ans.readInt();
    int size2 = ouf.readInt();
    ans.readEoln();
    ouf.readEoln();
    if (size1 != size2)
        quitf(_wa, "expected %d, found %d", size1, size2);

   
    std::vector<int> ja, pa;

    
    while (!ans.seekEof())
        ja.push_back(ans.readInt());

    while (!ouf.seekEof())
        pa.push_back(ouf.readInt());

    if (ja.size() != pa.size())
        quitf(_wa, "Expected %d elements, but %d found", ja.size(), pa.size());

    sort(ja.begin(), ja.end());
    sort(pa.begin(), pa.end());

    if (ja != pa)
        quitf(_wa, "Expected sequence and output are different (as unordered sequences) [size=%d]", ja.size());

    std::string message;
    
    if (ja.size() != 1)
        if (ja.empty())
            message = "empty sequence";
        else
            message = vtos(ja.size()) + " numbers (in increasing order):";
    else
        message = vtos(ja.size()) + " number:";
    
    if (ja.size() <= 5)
        for (int i = 0; i < std::min(int(ja.size()), 5); i++)
            message += " " + vtos(ja[i]);
    else
    {
        for (int i = 0; i < 2; i++)
            message += " " + vtos(ja[i]);
        message += " ...";
        for (int i = 0; i < 2; i++)
            message += " " + vtos(ja[ja.size() - 2 + i]);
    }
        
    quitf(_ok, "%s", message.c_str());
}
