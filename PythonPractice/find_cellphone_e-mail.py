# -*- coding: utf-8 -*-
"""
Created on Tue Apr 11 08:48:04 2017

@author: ChingWei
"""
import re,pyperclip,sqlite3
conn=sqlite3.connect('email_phonenumber.sqlite')
phone=re.compile(r'''
        (\(\d{2}\))?   #area code ex:(05)
        (\d{3})       #first num ex:632
        (\d{3})       #mid num ex:421
        (\d)        #last num ex:3
    
        ''',re.VERBOSE)   
#print(phone.search('(05)6324213 is my home cellphone number.').group())
email=re.compile(r'''(
        (\w+\.?\w+)            #username
        @                      #at
        ([a-zA-Z0-9-]+)        #domain name
        \.                     #.
        ([a-zA-Z0-9-]+)        #last name
        (\.[a-zA-Z0-9-]+)? )   #special
 ''',re.VERBOSE)
#print(email.search('willy.taiwan@gmail.com is my Email.').groups())
text=str(pyperclip.paste())
matches=[]
end=[]
for groups in phone.findall(text):
   for i in range(0,4):
     matches.append(''.join(groups[i]))
   else:
    end.append(''.join(matches))
    if conn.execute("select * from PhoneNum where Num='{}'".format(''.join(matches))).fetchone()==None:
        conn.execute("insert into PhoneNum values('{}')".format(''.join(matches)))    
    matches=[]
for groups in email.findall(text):
        end.append(groups[0])
        if conn.execute("select * from Email where Address='{}'".format(groups[0])).fetchone()==None:
            conn.execute("insert into Email values('{}')".format(groups[0]))    
if len(text)>0:
   
    pyperclip.copy('\n'.join(end))
    print("Copied to clipboard:")
    print('\n'.join(end))
else:
    print("No phone numbers or email addresses found.")
    
conn.commit()
conn.close()
    
