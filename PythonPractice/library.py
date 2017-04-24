# -*- coding: utf-8 -*-
"""
嘉義各大專院校圖書館館藏總量爬蟲
@author: Chan Ching-Wei
"""
import requests,re
from bs4 import BeautifulSoup
dict1={'吳鳳科技大學':'http://www.wfu.edu.tw/publicinfo/1-3-5_library_resource.htm','長庚科技大學':'http://cyli.cgust.edu.tw/files/11-1020-47-1.php'}
listnum=len(dict1)
listkey=list(dict1.keys())
for url in listkey:
    html=requests.get(dict1[url])
    html_bp=BeautifulSoup(html.text,'html.parser')
    
    #data1=html_bp.select('#content')
    data2=html_bp.find(text=re.compile(r'統計基準日'))
    
    
