cut -d: -f1-4,6-7  /etc/passwd | sed '2n;N;s/.*\n//' | rev | awk -F":" '{print $6}' | awk 'NR>='$FT_LINE1' && NR<='$FT_LINE2' { print }' | tr '\n' ',' | tr -d '\n' | sed 's/,$/./'
