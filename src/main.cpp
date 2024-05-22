#include <bar.h>
#include <foo.h>
#include <usenlo.h>
#include <learnvirtual.h>
#include <ddl.h>
#include <myNlo.h>
int main(int argc, char const *argv[])
{
    learnvirtual l;
    l.funcForlearnvirtual();
    ddl d;
    d.setddl();
    myNlo m_json;
    m_json.usenlo("tmp/dd.json", "w", "q");
}
