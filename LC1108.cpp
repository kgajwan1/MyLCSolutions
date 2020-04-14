//1108. Defanging an IP Address

class Solution {
public:
    string defangIPaddr(string address) {
        int i = 0; string updated;
        while ( address[i] != '\0' )
        {
            if ( address[i] == '.' )
                updated += "[.]"; 
            else
                updated += address[i];
            i++;
        }
        return updated;
    }
};