> Written with [StackEdit](https://stackedit.io/).
# Find the day You were born

**Credit** : #[Testbook.com](https://testbook.com/)
### Formula and Calculations
**Centuries Codes**
|   Century      |             Code              |
|----------------|-------------------------------|
|`1600 -> 1699`  |**6**|
|`1700 -> 1799`  |**4**|
|`1800 -> 1899`  |**2**|
|`1900 -> 1999`  |**0**|
|`2000 -> 2099`  |**6**|

**Months codes**
| Month  |  Code | Month| Code
|---------|-------|---------|--------|
|`January`|**0**  |`July`|**6**  |
|`February`|**3**  |`August`|**2**  |
|`March`|**3**  |`September`|**5**  |
|`April`|**6**  |`October`|**0**  |
|`May`|**1**|`November`|**3**  |
|`June`|**4**  |`December`|**5**  |

**Day codes**
|  Day  |  Code |
|-------|-------|
|`Sunday`|**0**|
|`Monday`|**1**
|`Tuesday`|**2**|
|`Wednesday`|**3**|
|`Thursday`|**4**|
|`Friday`|**5**|
|`Saturday`|**6**|

**<font size="5" style="text-decoration: underline">Formula</font>**
```
// Day you were born ****

int lastTwoDigitsOfYear = year % 100; // Last two Digits of year

int born_day = day + month_code + lastTwoDigitsOfYear + (lastTwoDigitsOfYear / 4) + century_code;
int born_day = born_day % 7;

switch(born_day)
{
case  0: cout<<msg<<"Sunday!\n";break;
case  1: cout<<msg<<"Monday!\n";break;
case  2: cout<<msg<<"Tuesday!\n";break;
case  3: cout<<msg<<"Wednesday!\n";break;
case  4: cout<<msg<<"Thursday!\n";break;
case  5: cout<<msg<<"Friday!\n";break;
case  6: cout<<msg<<"Saturaday!\n";break;
}
```
More Details at [testbook.com](https://testbook.com/question-answer/directionsstudy-the-following-information-c--5f256817aa23d40d10321fba#:~:text=Century%20Codes%3A&text=The%20year%20code%20can%20be,of%20year%2F4).

If you like my project, `like and follow` me!