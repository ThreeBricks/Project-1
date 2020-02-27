#include <iostream>
#include "bst.h"

using namespace std;

int main()
{
    Tree t;

    t.insertRec(t.getRoot(),8);
    t.insertIter(t.getRoot(),3);
    t.insertRec(t.getRoot(),10);
    t.insertRec(t.getRoot(),1);
    t.insertRec(t.getRoot(),6);
    t.insertRec(t.getRoot(),4);
    t.insertRec(t.getRoot(),7);
    t.insertIter(t.getRoot(),14);
    t.insertRec(t.getRoot(),13);

    t.preOrder(t.getRoot());
    cout<<endl;
    t.deleteRec(t.getRoot(),8);
    t.preOrder(t.getRoot());
    cout<<endl;
    t.deleteIter(t.getRoot(),13);
    cout<<endl;
    t.preOrder(t.getRoot());
    cout<<endl;
    cout<<t.findNextIter(t.getRoot())->getVal()<<endl;
    cout<<t.findPrevIter(t.getRoot())->getVal()<<endl;
    cout<<t.findMinIter(t.getRoot())->getVal()<<endl;
    cout<<t.findMaxIter(t.getRoot())->getVal()<<endl;
    cout<<t.findNextRec(t.getRoot())->getVal()<<endl;
    cout<<t.findPrevRec(t.getRoot())->getVal()<<endl;
    cout<<t.findMinRec(t.getRoot())->getVal()<<endl;
    cout<<t.findMaxRec(t.getRoot())->getVal()<<endl;
    sort(t.getRoot());


    return 0;
}
