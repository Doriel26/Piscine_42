ldapsearch -Q  "sn=*bon*" | grep sn: | wc -l | cut -c7-
