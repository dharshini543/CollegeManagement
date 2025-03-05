#include"College.h"
#include <iostream>

College::College()
{
    cout<<"College Constructor"<<endl;
    m_management->initStudent(&m_student);
    m_management->initStaff(&m_staff);
}

College::~College()
{
    cout<<"College Destructor"<<endl;
}
