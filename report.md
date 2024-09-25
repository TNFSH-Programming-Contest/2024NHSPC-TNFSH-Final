
## Progress
<!-- progress start -->

- cover.tex [:white_check_mark:](cover.tex)
- appendix.tex [:x:](appendix.tex)

| | A | B | C | D | E | F |
| --- | --- | --- | --- | --- | --- | --- |
| contest_name |  [:white_check_mark:](pA/problem.json) | [:white_check_mark:](pB/problem.json) | [:white_check_mark:](pC/problem.json) | [:white_check_mark:](pD/problem.json) | [:white_check_mark:](pE/problem.json) | [:white_check_mark:](pF/problem.json) |
| problem_label |  [:white_check_mark:](pA/problem.json) | [:white_check_mark:](pB/problem.json) | [:white_check_mark:](pC/problem.json) | [:white_check_mark:](pD/problem.json) | [:white_check_mark:](pE/problem.json) | [:white_check_mark:](pF/problem.json) |
| name |  [:x:](pA/problem.json) | [:white_check_mark:](pB/problem.json)<br>HelloMinecraft | [:x:](pC/problem.json) | [:white_check_mark:](pD/problem.json)<br>AngusFarm | [:x:](pE/problem.json) | [:white_check_mark:](pF/problem.json)<br>ShortProblemAgain |
| title |  [:x:](pA/problem.json) | [:white_check_mark:](pB/problem.json)<br>你好我的世界 | [:x:](pC/problem.json) | [:white_check_mark:](pD/problem.json)<br>Angus與菜寮 | [:x:](pE/problem.json) | [:white_check_mark:](pF/problem.json)<br>又一個簡短的問題 |
| memory_limit |  512 | 512 | 512 | 128 | 512 | 512 |
| time_limit |  1.0 | 1.0 | 1.0 | 1.0 | 1.0 | 2.0 |
| has_checker |  False | False | False | False | False | False |
| gen | [:x:](pA/gen)<br>[data](pA/gen/data) | [:white_check_mark:](pB/gen) | [:x:](pC/gen)<br>[gen.cpp](pC/gen/gen.cpp)<br>[data](pC/gen/data) | [:white_check_mark:](pD/gen) | [:x:](pE/gen)<br>[gen.cpp](pE/gen/gen.cpp)<br>[data](pE/gen/data) | [:white_check_mark:](pF/gen) |
| solution | [:white_check_mark:](pA/solution) | [:white_check_mark:](pB/solution) | [:white_check_mark:](pC/solution) | [:white_check_mark:](pD/solution) | [:white_check_mark:](pE/solution) | [:white_check_mark:](pF/solution) |
| validator | [:x:](pA/validator)<br>[validator.cpp](pA/validator/validator.cpp) | [:x:](pB/validator)<br>[validator.cpp](pB/validator/validator.cpp) | [:x:](pC/validator)<br>[validator.cpp](pC/validator/validator.cpp) | [:x:](pD/validator)<br>[validator.cpp](pD/validator/validator.cpp) | [:x:](pE/validator)<br>[validator.cpp](pE/validator/validator.cpp) | [:x:](pF/validator)<br>[validator.cpp](pF/validator/validator.cpp) |
| subtasks.json<br>global_validators |  [:white_check_mark:](pA/subtasks.json) | [:warning:](pB/subtasks.json) Not set | [:white_check_mark:](pC/subtasks.json) | [:warning:](pD/subtasks.json) Not set | [:white_check_mark:](pE/subtasks.json) | [:warning:](pF/subtasks.json) Not set |
| tests | [:x:](pA/tests)<br>[Auto build disabled](pA/gen/DISABLE_AUTO_BUILD) | [:white_check_mark:](pB/tests)<br>[Auto build disabled](pB/gen/DISABLE_AUTO_BUILD) | [:x:](pC/tests)<br>[Auto build disabled](pC/gen/DISABLE_AUTO_BUILD) | [:white_check_mark:](pD/tests)<br>[Auto build disabled](pD/gen/DISABLE_AUTO_BUILD) | [:x:](pE/tests)<br>[Auto build disabled](pE/gen/DISABLE_AUTO_BUILD) | [:white_check_mark:](pF/tests)<br>[Auto build disabled](pF/gen/DISABLE_AUTO_BUILD) |
| statement/index.md | [:white_check_mark:](pA/statement/index.md) | [:white_check_mark:](pB/statement/index.md) | [:white_check_mark:](pC/statement/index.md) | [:white_check_mark:](pD/statement/index.md) | [:x:](pE/statement/index.md) | [:white_check_mark:](pF/statement/index.md) |
| statement/index.pdf | [:x:](pA/statement/index.pdf)<br>[Auto build disabled](pA/statement/DISABLE_AUTO_BUILD) | [:white_check_mark:](pB/statement/index.pdf)<br>[Auto build disabled](pB/statement/DISABLE_AUTO_BUILD) | [:x:](pC/statement/index.pdf)<br>[Auto build disabled](pC/statement/DISABLE_AUTO_BUILD) | [:white_check_mark:](pD/statement/index.pdf)<br>[Auto build disabled](pD/statement/DISABLE_AUTO_BUILD) | [:x:](pE/statement/index.pdf)<br>[Auto build disabled](pE/statement/DISABLE_AUTO_BUILD) | [:white_check_mark:](pF/statement/index.pdf)<br>[Auto build disabled](pF/statement/DISABLE_AUTO_BUILD) |

<!-- progress end -->

## Subtasks
<!-- subtasks start -->

| | 1 | 2 | 3 | 4 | 5 | 6 |
| --- | --- | --- | --- | --- | --- | --- |
| A | 100<br>無額外限制 |
| B | 10<br>所有 $a_{i,j}=b_{i,j}=0$ | 14<br>所有 $a_{i,j}=0$ | 14<br>所有 $a_{i,j}=1,b_{i,j}=0$ | 18<br>所有 $a_{i,j}=1$ | 24<br>所有 $way_i=1$ | 20<br>無額外限制 |
| C | 100<br>無額外限制 |
| D | 18<br>$c=0$ 且 $n\le 10^5$ | 24<br>$c\le 10^6$ 且 $n\le 10^5$ | 12<br>$c=10^{18}$ 且所有 $a_i=1$ 且 $n\le 10^5$ | 16<br>$c=10^{18}$ 且 $n\le 10^5$ | 10<br>$n\le 3000$ | 20<br>無額外限制 |
| E | 100<br>無額外限制 |
| F | 15<br>$n\le 10^7,m=1$ | 20<br>$n\le 10^7,m\le 10^6$ | 25<br>$m=1$ | 30<br>$m\le 10^6$ | 10<br>無額外限制 |

<!-- subtasks end -->

## Scores
<!-- scores start -->

| score | count | groups |
| --- | --- | --- |
| 10 | 3 | (B1) (D5) (F5) |
| 14 | 2 | (B2) (B3) |
| 18 | 2 | (B4) (D1) |
| 20 | 6 | (B1, D5) (B1, F5) (D5, F5) (B6) (D6) (F2) |
| 22 | 3 | (B1, D3) (D3, D5) (D3, F5) |
| 24 | 8 | (B1, B2) (B2, D5) (B2, F5) (B1, B3) (B3, D5) (B3, F5) (B5) (D2) |
| 25 | 4 | (B1, F1) (D5, F1) (F1, F5) (F3) |
| 26 | 5 | (B2, D3) (B3, D3) (B1, D4) (D4, D5) (D4, F5) |
| 28 | 8 | (B2, B3) (D3, D4) (B1, B4) (B4, D5) (B4, F5) (B1, D1) (D1, D5) (D1, F5) |
| 29 | 2 | (B2, F1) (B3, F1) |
| 30 | 15 | (B1, D5, F5) (B2, D4) (B3, D4) (B4, D3) (D1, D3) (B1, B6) (B6, D5) (B6, F5) (B1, D6) (D5, D6) (D6, F5) (B1, F2) (D5, F2) (F2, F5) (F4) |
| 32 | 10 | (B1, D3, D5) (B1, D3, F5) (D3, D5, F5) (B2, B4) (B3, B4) (B2, D1) (B3, D1) (B6, D3) (D3, D6) (D3, F2) |
| 33 | 2 | (B4, F1) (D1, F1) |
| 34 | 20 | (B1, B2, D5) (B1, B2, F5) (B2, D5, F5) (B1, B3, D5) (B1, B3, F5) (B3, D5, F5) (B4, D4) (D1, D4) (B2, B6) (B3, B6) (B2, D6) (B3, D6) (B2, F2) (B3, F2) (B1, B5) (B5, D5) (B5, F5) (B1, D2) (D2, D5) (D2, F5) |
| 35 | 9 | (B1, D5, F1) (B1, F1, F5) (D5, F1, F5) (B6, F1) (D6, F1) (F1, F2) (B1, F3) (D5, F3) (F3, F5) |
| 36 | 15 | (B1, B2, D3) (B2, D3, D5) (B2, D3, F5) (B1, B3, D3) (B3, D3, D5) (B3, D3, F5) (B1, D4, D5) (B1, D4, F5) (D4, D5, F5) (B4, D1) (B6, D4) (D4, D6) (D4, F2) (B5, D3) (D2, D3) |
| 37 | 4 | (B1, D3, F1) (D3, D5, F1) (D3, F1, F5) (D3, F3) |
| 38 | 22 | (B1, B2, B3) (B2, B3, D5) (B2, B3, F5) (B1, D3, D4) (D3, D4, D5) (D3, D4, F5) (B1, B4, D5) (B1, B4, F5) (B4, D5, F5) (B1, D1, D5) (B1, D1, F5) (D1, D5, F5) (B4, B6) (B6, D1) (B4, D6) (D1, D6) (B4, F2) (D1, F2) (B2, B5) (B3, B5) (B2, D2) (B3, D2) |
| 39 | 10 | (B1, B2, F1) (B2, D5, F1) (B2, F1, F5) (B1, B3, F1) (B3, D5, F1) (B3, F1, F5) (B5, F1) (D2, F1) (B2, F3) (B3, F3) |
| 40 | 31 | (B2, B3, D3) (B1, B2, D4) (B2, D4, D5) (B2, D4, F5) (B1, B3, D4) (B3, D4, D5) (B3, D4, F5) (B1, B4, D3) (B4, D3, D5) (B4, D3, F5) (B1, D1, D3) (D1, D3, D5) (D1, D3, F5) (B1, B6, D5) (B1, B6, F5) (B6, D5, F5) (B1, D5, D6) (B1, D6, F5) (D5, D6, F5) (B6, D6) (B1, D5, F2) (B1, F2, F5) (D5, F2, F5) (B6, F2) (D6, F2) (B5, D4) (D2, D4) (F1, F3) (B1, F4) (D5, F4) (F4, F5) |
| 41 | 6 | (B2, D3, F1) (B3, D3, F1) (B1, D4, F1) (D4, D5, F1) (D4, F1, F5) (D4, F3) |
| 42 | 28 | (B2, D3, D4) (B3, D3, D4) (B1, B2, B4) (B2, B4, D5) (B2, B4, F5) (B1, B3, B4) (B3, B4, D5) (B3, B4, F5) (B1, B2, D1) (B2, D1, D5) (B2, D1, F5) (B1, B3, D1) (B3, D1, D5) (B3, D1, F5) (B1, B6, D3) (B6, D3, D5) (B6, D3, F5) (B1, D3, D6) (D3, D5, D6) (D3, D6, F5) (B1, D3, F2) (D3, D5, F2) (D3, F2, F5) (B4, B5) (B5, D1) (B4, D2) (D1, D2) (D3, F4) |
| 43 | 10 | (B2, B3, F1) (D3, D4, F1) (B1, B4, F1) (B4, D5, F1) (B4, F1, F5) (B1, D1, F1) (D1, D5, F1) (D1, F1, F5) (B4, F3) (D1, F3) |
| 44 | 43 | (B2, B3, D4) (B2, B4, D3) (B3, B4, D3) (B1, B4, D4) (B4, D4, D5) (B4, D4, F5) (B2, D1, D3) (B3, D1, D3) (B1, D1, D4) (D1, D4, D5) (D1, D4, F5) (B1, B2, B6) (B2, B6, D5) (B2, B6, F5) (B1, B3, B6) (B3, B6, D5) (B3, B6, F5) (B1, B2, D6) (B2, D5, D6) (B2, D6, F5) (B1, B3, D6) (B3, D5, D6) (B3, D6, F5) (B1, B2, F2) (B2, D5, F2) (B2, F2, F5) (B1, B3, F2) (B3, D5, F2) (B3, F2, F5) (B1, B5, D5) (B1, B5, F5) (B5, D5, F5) (B5, B6) (B5, D6) (B5, F2) (B1, D2, D5) (B1, D2, F5) (D2, D5, F5) (B6, D2) (D2, D6) (D2, F2) (B2, F4) (B3, F4) |
| 45 | 20 | (B2, D4, F1) (B3, D4, F1) (B4, D3, F1) (D1, D3, F1) (B1, B6, F1) (B6, D5, F1) (B6, F1, F5) (B1, D6, F1) (D5, D6, F1) (D6, F1, F5) (B1, F1, F2) (D5, F1, F2) (F1, F2, F5) (B1, D5, F3) (B1, F3, F5) (D5, F3, F5) (B6, F3) (D6, F3) (F2, F3) (F1, F4) |
| 46 | 29 | (B2, B3, B4) (B4, D3, D4) (B2, B3, D1) (D1, D3, D4) (B1, B4, D1) (B4, D1, D5) (B4, D1, F5) (B2, B6, D3) (B3, B6, D3) (B1, B6, D4) (B6, D4, D5) (B6, D4, F5) (B2, D3, D6) (B3, D3, D6) (B1, D4, D6) (D4, D5, D6) (D4, D6, F5) (B2, D3, F2) (B3, D3, F2) (B1, D4, F2) (D4, D5, F2) (D4, F2, F5) (B1, B5, D3) (B5, D3, D5) (B5, D3, F5) (B1, D2, D3) (D2, D3, D5) (D2, D3, F5) (D4, F4) |
| 47 | 10 | (B2, B4, F1) (B3, B4, F1) (B2, D1, F1) (B3, D1, F1) (B6, D3, F1) (D3, D6, F1) (D3, F1, F2) (B1, D3, F3) (D3, D5, F3) (D3, F3, F5) |
| 48 | 44 | (B2, B4, D4) (B3, B4, D4) (B2, D1, D4) (B3, D1, D4) (B4, D1, D3) (B2, B3, B6) (B6, D3, D4) (B1, B4, B6) (B4, B6, D5) (B4, B6, F5) (B1, B6, D1) (B6, D1, D5) (B6, D1, F5) (B2, B3, D6) (D3, D4, D6) (B1, B4, D6) (B4, D5, D6) (B4, D6, F5) (B1, D1, D6) (D1, D5, D6) (D1, D6, F5) (B2, B3, F2) (D3, D4, F2) (B1, B4, F2) (B4, D5, F2) (B4, F2, F5) (B1, D1, F2) (D1, D5, F2) (D1, F2, F5) (B1, B2, B5) (B2, B5, D5) (B2, B5, F5) (B1, B3, B5) (B3, B5, D5) (B3, B5, F5) (B1, B2, D2) (B2, D2, D5) (B2, D2, F5) (B1, B3, D2) (B3, D2, D5) (B3, D2, F5) (B5, D2) (B4, F4) (D1, F4) |
| 49 | 22 | (B4, D4, F1) (D1, D4, F1) (B2, B6, F1) (B3, B6, F1) (B2, D6, F1) (B3, D6, F1) (B2, F1, F2) (B3, F1, F2) (B1, B5, F1) (B5, D5, F1) (B5, F1, F5) (B1, D2, F1) (D2, D5, F1) (D2, F1, F5) (B1, B2, F3) (B2, D5, F3) (B2, F3, F5) (B1, B3, F3) (B3, D5, F3) (B3, F3, F5) (B5, F3) (D2, F3) |
| 50 | 42 | (B2, B4, D1) (B3, B4, D1) (B2, B6, D4) (B3, B6, D4) (B4, B6, D3) (B6, D1, D3) (B2, D4, D6) (B3, D4, D6) (B4, D3, D6) (D1, D3, D6) (B1, B6, D6) (B6, D5, D6) (B6, D6, F5) (B2, D4, F2) (B3, D4, F2) (B4, D3, F2) (D1, D3, F2) (B1, B6, F2) (B6, D5, F2) (B6, F2, F5) (B1, D6, F2) (D5, D6, F2) (D6, F2, F5) (B2, B5, D3) (B3, B5, D3) (B1, B5, D4) (B5, D4, D5) (B5, D4, F5) (B2, D2, D3) (B3, D2, D3) (B1, D2, D4) (D2, D4, D5) (D2, D4, F5) (B1, F1, F3) (D5, F1, F3) (F1, F3, F5) (B1, D5, F4) (B1, F4, F5) (D5, F4, F5) (B6, F4) (D6, F4) (F2, F4) |
| 51 | 11 | (B4, D1, F1) (B6, D4, F1) (D4, D6, F1) (D4, F1, F2) (B5, D3, F1) (D2, D3, F1) (B2, D3, F3) (B3, D3, F3) (B1, D4, F3) (D4, D5, F3) (D4, F3, F5) |
| 52 | 36 | (B4, D1, D4) (B2, B4, B6) (B3, B4, B6) (B2, B6, D1) (B3, B6, D1) (B2, B4, D6) (B3, B4, D6) (B2, D1, D6) (B3, D1, D6) (B6, D3, D6) (B2, B4, F2) (B3, B4, F2) (B2, D1, F2) (B3, D1, F2) (B6, D3, F2) (D3, D6, F2) (B2, B3, B5) (B5, D3, D4) (B1, B4, B5) (B4, B5, D5) (B4, B5, F5) (B1, B5, D1) (B5, D1, D5) (B5, D1, F5) (B2, B3, D2) (D2, D3, D4) (B1, B4, D2) (B4, D2, D5) (B4, D2, F5) (B1, D1, D2) (D1, D2, D5) (D1, D2, F5) (D3, F1, F3) (B1, D3, F4) (D3, D5, F4) (D3, F4, F5) |
| 53 | 18 | (B4, B6, F1) (B6, D1, F1) (B4, D6, F1) (D1, D6, F1) (B4, F1, F2) (D1, F1, F2) (B2, B5, F1) (B3, B5, F1) (B2, D2, F1) (B3, D2, F1) (B2, B3, F3) (D3, D4, F3) (B1, B4, F3) (B4, D5, F3) (B4, F3, F5) (B1, D1, F3) (D1, D5, F3) (D1, F3, F5) |
| 54 | 48 | (B4, B6, D4) (B6, D1, D4) (B4, D4, D6) (D1, D4, D6) (B2, B6, D6) (B3, B6, D6) (B4, D4, F2) (D1, D4, F2) (B2, B6, F2) (B3, B6, F2) (B2, D6, F2) (B3, D6, F2) (B2, B5, D4) (B3, B5, D4) (B4, B5, D3) (B5, D1, D3) (B1, B5, B6) (B5, B6, D5) (B5, B6, F5) (B1, B5, D6) (B5, D5, D6) (B5, D6, F5) (B1, B5, F2) (B5, D5, F2) (B5, F2, F5) (B2, D2, D4) (B3, D2, D4) (B4, D2, D3) (D1, D2, D3) (B1, B6, D2) (B6, D2, D5) (B6, D2, F5) (B1, D2, D6) (D2, D5, D6) (D2, D6, F5) (B1, D2, F2) (D2, D5, F2) (D2, F2, F5) (B2, F1, F3) (B3, F1, F3) (B1, B2, F4) (B2, D5, F4) (B2, F4, F5) (B1, B3, F4) (B3, D5, F4) (B3, F4, F5) (B5, F4) (D2, F4) |
| 55 | 22 | (B6, D6, F1) (B6, F1, F2) (D6, F1, F2) (B5, D4, F1) (D2, D4, F1) (B2, D4, F3) (B3, D4, F3) (B4, D3, F3) (D1, D3, F3) (B1, B6, F3) (B6, D5, F3) (B6, F3, F5) (B1, D6, F3) (D5, D6, F3) (D6, F3, F5) (B1, F2, F3) (D5, F2, F3) (F2, F3, F5) (B1, F1, F4) (D5, F1, F4) (F1, F4, F5) (F3, F4) |
| 56 | 26 | (B4, B6, D1) (B4, D1, D6) (B6, D4, D6) (B4, D1, F2) (B6, D4, F2) (D4, D6, F2) (B2, B4, B5) (B3, B4, B5) (B2, B5, D1) (B3, B5, D1) (B5, B6, D3) (B5, D3, D6) (B5, D3, F2) (B2, B4, D2) (B3, B4, D2) (B2, D1, D2) (B3, D1, D2) (B6, D2, D3) (D2, D3, D6) (D2, D3, F2) (D4, F1, F3) (B2, D3, F4) (B3, D3, F4) (B1, D4, F4) (D4, D5, F4) (D4, F4, F5) |
| 57 | 12 | (B4, B5, F1) (B5, D1, F1) (B4, D2, F1) (D1, D2, F1) (B2, B4, F3) (B3, B4, F3) (B2, D1, F3) (B3, D1, F3) (B6, D3, F3) (D3, D6, F3) (D3, F2, F3) (D3, F1, F4) |
| 58 | 35 | (B4, B6, D6) (B6, D1, D6) (B4, B6, F2) (B6, D1, F2) (B4, D6, F2) (D1, D6, F2) (B4, B5, D4) (B5, D1, D4) (B2, B5, B6) (B3, B5, B6) (B2, B5, D6) (B3, B5, D6) (B2, B5, F2) (B3, B5, F2) (B4, D2, D4) (D1, D2, D4) (B2, B6, D2) (B3, B6, D2) (B2, D2, D6) (B3, D2, D6) (B2, D2, F2) (B3, D2, F2) (B1, B5, D2) (B5, D2, D5) (B5, D2, F5) (B4, F1, F3) (D1, F1, F3) (B2, B3, F4) (D3, D4, F4) (B1, B4, F4) (B4, D5, F4) (B4, F4, F5) (B1, D1, F4) (D1, D5, F4) (D1, F4, F5) |
| 59 | 22 | (B5, B6, F1) (B5, D6, F1) (B5, F1, F2) (B6, D2, F1) (D2, D6, F1) (D2, F1, F2) (B4, D4, F3) (D1, D4, F3) (B2, B6, F3) (B3, B6, F3) (B2, D6, F3) (B3, D6, F3) (B2, F2, F3) (B3, F2, F3) (B1, B5, F3) (B5, D5, F3) (B5, F3, F5) (B1, D2, F3) (D2, D5, F3) (D2, F3, F5) (B2, F1, F4) (B3, F1, F4) |
| 60 | 26 | (B6, D6, F2) (B4, B5, D1) (B5, B6, D4) (B5, D4, D6) (B5, D4, F2) (B4, D1, D2) (B6, D2, D4) (D2, D4, D6) (D2, D4, F2) (B5, D2, D3) (B6, F1, F3) (D6, F1, F3) (F1, F2, F3) (B2, D4, F4) (B3, D4, F4) (B4, D3, F4) (D1, D3, F4) (B1, B6, F4) (B6, D5, F4) (B6, F4, F5) (B1, D6, F4) (D5, D6, F4) (D6, F4, F5) (B1, F2, F4) (D5, F2, F4) (F2, F4, F5) |
| 61 | 7 | (B4, D1, F3) (B6, D4, F3) (D4, D6, F3) (D4, F2, F3) (B5, D3, F3) (D2, D3, F3) (D4, F1, F4) |
| 62 | 21 | (B4, B5, B6) (B5, B6, D1) (B4, B5, D6) (B5, D1, D6) (B4, B5, F2) (B5, D1, F2) (B4, B6, D2) (B6, D1, D2) (B4, D2, D6) (D1, D2, D6) (B4, D2, F2) (D1, D2, F2) (B2, B5, D2) (B3, B5, D2) (B2, B4, F4) (B3, B4, F4) (B2, D1, F4) (B3, D1, F4) (B6, D3, F4) (D3, D6, F4) (D3, F2, F4) |
| 63 | 13 | (B5, D2, F1) (B4, B6, F3) (B6, D1, F3) (B4, D6, F3) (D1, D6, F3) (B4, F2, F3) (D1, F2, F3) (B2, B5, F3) (B3, B5, F3) (B2, D2, F3) (B3, D2, F3) (B4, F1, F4) (D1, F1, F4) |
| 64 | 23 | (B5, B6, D6) (B5, B6, F2) (B5, D6, F2) (B6, D2, D6) (B6, D2, F2) (D2, D6, F2) (B5, D2, D4) (B5, F1, F3) (D2, F1, F3) (B4, D4, F4) (D1, D4, F4) (B2, B6, F4) (B3, B6, F4) (B2, D6, F4) (B3, D6, F4) (B2, F2, F4) (B3, F2, F4) (B1, B5, F4) (B5, D5, F4) (B5, F4, F5) (B1, D2, F4) (D2, D5, F4) (D2, F4, F5) |
| 65 | 11 | (B6, D6, F3) (B6, F2, F3) (D6, F2, F3) (B5, D4, F3) (D2, D4, F3) (B6, F1, F4) (D6, F1, F4) (F1, F2, F4) (B1, F3, F4) (D5, F3, F4) (F3, F4, F5) |
| 66 | 8 | (B4, B5, D2) (B5, D1, D2) (B4, D1, F4) (B6, D4, F4) (D4, D6, F4) (D4, F2, F4) (B5, D3, F4) (D2, D3, F4) |
| 67 | 5 | (B4, B5, F3) (B5, D1, F3) (B4, D2, F3) (D1, D2, F3) (D3, F3, F4) |
| 68 | 13 | (B5, B6, D2) (B5, D2, D6) (B5, D2, F2) (B4, B6, F4) (B6, D1, F4) (B4, D6, F4) (D1, D6, F4) (B4, F2, F4) (D1, F2, F4) (B2, B5, F4) (B3, B5, F4) (B2, D2, F4) (B3, D2, F4) |
| 69 | 10 | (B5, B6, F3) (B5, D6, F3) (B5, F2, F3) (B6, D2, F3) (D2, D6, F3) (D2, F2, F3) (B5, F1, F4) (D2, F1, F4) (B2, F3, F4) (B3, F3, F4) |
| 70 | 6 | (B6, D6, F4) (B6, F2, F4) (D6, F2, F4) (B5, D4, F4) (D2, D4, F4) (F1, F3, F4) |
| 72 | 4 | (B4, B5, F4) (B5, D1, F4) (B4, D2, F4) (D1, D2, F4) |
| 73 | 3 | (B5, D2, F3) (B4, F3, F4) (D1, F3, F4) |
| 74 | 6 | (B5, B6, F4) (B5, D6, F4) (B5, F2, F4) (B6, D2, F4) (D2, D6, F4) (D2, F2, F4) |
| 75 | 3 | (B6, F3, F4) (D6, F3, F4) (F2, F3, F4) |
| 79 | 2 | (B5, F3, F4) (D2, F3, F4) |
| 100 | 3 | (A1) (C1) (E1) |
| 110 | 9 | (A1, B1) (A1, D5) (A1, F5) (B1, C1) (C1, D5) (C1, F5) (B1, E1) (D5, E1) (E1, F5) |
| 112 | 3 | (A1, D3) (C1, D3) (D3, E1) |
| 114 | 6 | (A1, B2) (A1, B3) (B2, C1) (B3, C1) (B2, E1) (B3, E1) |
| 115 | 3 | (A1, F1) (C1, F1) (E1, F1) |
| 116 | 3 | (A1, D4) (C1, D4) (D4, E1) |
| 118 | 6 | (A1, B4) (A1, D1) (B4, C1) (C1, D1) (B4, E1) (D1, E1) |
| 120 | 18 | (A1, B1, D5) (A1, B1, F5) (A1, D5, F5) (A1, B6) (A1, D6) (A1, F2) (B1, C1, D5) (B1, C1, F5) (C1, D5, F5) (B6, C1) (C1, D6) (C1, F2) (B1, D5, E1) (B1, E1, F5) (D5, E1, F5) (B6, E1) (D6, E1) (E1, F2) |
| 122 | 9 | (A1, B1, D3) (A1, D3, D5) (A1, D3, F5) (B1, C1, D3) (C1, D3, D5) (C1, D3, F5) (B1, D3, E1) (D3, D5, E1) (D3, E1, F5) |
| 124 | 24 | (A1, B1, B2) (A1, B2, D5) (A1, B2, F5) (A1, B1, B3) (A1, B3, D5) (A1, B3, F5) (A1, B5) (A1, D2) (B1, B2, C1) (B2, C1, D5) (B2, C1, F5) (B1, B3, C1) (B3, C1, D5) (B3, C1, F5) (B5, C1) (C1, D2) (B1, B2, E1) (B2, D5, E1) (B2, E1, F5) (B1, B3, E1) (B3, D5, E1) (B3, E1, F5) (B5, E1) (D2, E1) |
| 125 | 12 | (A1, B1, F1) (A1, D5, F1) (A1, F1, F5) (A1, F3) (B1, C1, F1) (C1, D5, F1) (C1, F1, F5) (C1, F3) (B1, E1, F1) (D5, E1, F1) (E1, F1, F5) (E1, F3) |
| 126 | 15 | (A1, B2, D3) (A1, B3, D3) (A1, B1, D4) (A1, D4, D5) (A1, D4, F5) (B2, C1, D3) (B3, C1, D3) (B1, C1, D4) (C1, D4, D5) (C1, D4, F5) (B2, D3, E1) (B3, D3, E1) (B1, D4, E1) (D4, D5, E1) (D4, E1, F5) |
| 127 | 3 | (A1, D3, F1) (C1, D3, F1) (D3, E1, F1) |
| 128 | 24 | (A1, B2, B3) (A1, D3, D4) (A1, B1, B4) (A1, B4, D5) (A1, B4, F5) (A1, B1, D1) (A1, D1, D5) (A1, D1, F5) (B2, B3, C1) (C1, D3, D4) (B1, B4, C1) (B4, C1, D5) (B4, C1, F5) (B1, C1, D1) (C1, D1, D5) (C1, D1, F5) (B2, B3, E1) (D3, D4, E1) (B1, B4, E1) (B4, D5, E1) (B4, E1, F5) (B1, D1, E1) (D1, D5, E1) (D1, E1, F5) |
| 129 | 6 | (A1, B2, F1) (A1, B3, F1) (B2, C1, F1) (B3, C1, F1) (B2, E1, F1) (B3, E1, F1) |
| 130 | 42 | (A1, B2, D4) (A1, B3, D4) (A1, B4, D3) (A1, D1, D3) (A1, B1, B6) (A1, B6, D5) (A1, B6, F5) (A1, B1, D6) (A1, D5, D6) (A1, D6, F5) (A1, B1, F2) (A1, D5, F2) (A1, F2, F5) (A1, F4) (B2, C1, D4) (B3, C1, D4) (B4, C1, D3) (C1, D1, D3) (B1, B6, C1) (B6, C1, D5) (B6, C1, F5) (B1, C1, D6) (C1, D5, D6) (C1, D6, F5) (B1, C1, F2) (C1, D5, F2) (C1, F2, F5) (C1, F4) (B2, D4, E1) (B3, D4, E1) (B4, D3, E1) (D1, D3, E1) (B1, B6, E1) (B6, D5, E1) (B6, E1, F5) (B1, D6, E1) (D5, D6, E1) (D6, E1, F5) (B1, E1, F2) (D5, E1, F2) (E1, F2, F5) (E1, F4) |
| 131 | 3 | (A1, D4, F1) (C1, D4, F1) (D4, E1, F1) |
| 132 | 21 | (A1, B2, B4) (A1, B3, B4) (A1, B2, D1) (A1, B3, D1) (A1, B6, D3) (A1, D3, D6) (A1, D3, F2) (B2, B4, C1) (B3, B4, C1) (B2, C1, D1) (B3, C1, D1) (B6, C1, D3) (C1, D3, D6) (C1, D3, F2) (B2, B4, E1) (B3, B4, E1) (B2, D1, E1) (B3, D1, E1) (B6, D3, E1) (D3, D6, E1) (D3, E1, F2) |
| 133 | 6 | (A1, B4, F1) (A1, D1, F1) (B4, C1, F1) (C1, D1, F1) (B4, E1, F1) (D1, E1, F1) |
| 134 | 42 | (A1, B4, D4) (A1, D1, D4) (A1, B2, B6) (A1, B3, B6) (A1, B2, D6) (A1, B3, D6) (A1, B2, F2) (A1, B3, F2) (A1, B1, B5) (A1, B5, D5) (A1, B5, F5) (A1, B1, D2) (A1, D2, D5) (A1, D2, F5) (B4, C1, D4) (C1, D1, D4) (B2, B6, C1) (B3, B6, C1) (B2, C1, D6) (B3, C1, D6) (B2, C1, F2) (B3, C1, F2) (B1, B5, C1) (B5, C1, D5) (B5, C1, F5) (B1, C1, D2) (C1, D2, D5) (C1, D2, F5) (B4, D4, E1) (D1, D4, E1) (B2, B6, E1) (B3, B6, E1) (B2, D6, E1) (B3, D6, E1) (B2, E1, F2) (B3, E1, F2) (B1, B5, E1) (B5, D5, E1) (B5, E1, F5) (B1, D2, E1) (D2, D5, E1) (D2, E1, F5) |
| 135 | 18 | (A1, B6, F1) (A1, D6, F1) (A1, F1, F2) (A1, B1, F3) (A1, D5, F3) (A1, F3, F5) (B6, C1, F1) (C1, D6, F1) (C1, F1, F2) (B1, C1, F3) (C1, D5, F3) (C1, F3, F5) (B6, E1, F1) (D6, E1, F1) (E1, F1, F2) (B1, E1, F3) (D5, E1, F3) (E1, F3, F5) |
| 136 | 18 | (A1, B4, D1) (A1, B6, D4) (A1, D4, D6) (A1, D4, F2) (A1, B5, D3) (A1, D2, D3) (B4, C1, D1) (B6, C1, D4) (C1, D4, D6) (C1, D4, F2) (B5, C1, D3) (C1, D2, D3) (B4, D1, E1) (B6, D4, E1) (D4, D6, E1) (D4, E1, F2) (B5, D3, E1) (D2, D3, E1) |
| 137 | 3 | (A1, D3, F3) (C1, D3, F3) (D3, E1, F3) |
| 138 | 30 | (A1, B4, B6) (A1, B6, D1) (A1, B4, D6) (A1, D1, D6) (A1, B4, F2) (A1, D1, F2) (A1, B2, B5) (A1, B3, B5) (A1, B2, D2) (A1, B3, D2) (B4, B6, C1) (B6, C1, D1) (B4, C1, D6) (C1, D1, D6) (B4, C1, F2) (C1, D1, F2) (B2, B5, C1) (B3, B5, C1) (B2, C1, D2) (B3, C1, D2) (B4, B6, E1) (B6, D1, E1) (B4, D6, E1) (D1, D6, E1) (B4, E1, F2) (D1, E1, F2) (B2, B5, E1) (B3, B5, E1) (B2, D2, E1) (B3, D2, E1) |
| 139 | 12 | (A1, B5, F1) (A1, D2, F1) (A1, B2, F3) (A1, B3, F3) (B5, C1, F1) (C1, D2, F1) (B2, C1, F3) (B3, C1, F3) (B5, E1, F1) (D2, E1, F1) (B2, E1, F3) (B3, E1, F3) |
| 140 | 27 | (A1, B6, D6) (A1, B6, F2) (A1, D6, F2) (A1, B5, D4) (A1, D2, D4) (A1, F1, F3) (A1, B1, F4) (A1, D5, F4) (A1, F4, F5) (B6, C1, D6) (B6, C1, F2) (C1, D6, F2) (B5, C1, D4) (C1, D2, D4) (C1, F1, F3) (B1, C1, F4) (C1, D5, F4) (C1, F4, F5) (B6, D6, E1) (B6, E1, F2) (D6, E1, F2) (B5, D4, E1) (D2, D4, E1) (E1, F1, F3) (B1, E1, F4) (D5, E1, F4) (E1, F4, F5) |
| 141 | 3 | (A1, D4, F3) (C1, D4, F3) (D4, E1, F3) |
| 142 | 15 | (A1, B4, B5) (A1, B5, D1) (A1, B4, D2) (A1, D1, D2) (A1, D3, F4) (B4, B5, C1) (B5, C1, D1) (B4, C1, D2) (C1, D1, D2) (C1, D3, F4) (B4, B5, E1) (B5, D1, E1) (B4, D2, E1) (D1, D2, E1) (D3, E1, F4) |
| 143 | 6 | (A1, B4, F3) (A1, D1, F3) (B4, C1, F3) (C1, D1, F3) (B4, E1, F3) (D1, E1, F3) |
| 144 | 24 | (A1, B5, B6) (A1, B5, D6) (A1, B5, F2) (A1, B6, D2) (A1, D2, D6) (A1, D2, F2) (A1, B2, F4) (A1, B3, F4) (B5, B6, C1) (B5, C1, D6) (B5, C1, F2) (B6, C1, D2) (C1, D2, D6) (C1, D2, F2) (B2, C1, F4) (B3, C1, F4) (B5, B6, E1) (B5, D6, E1) (B5, E1, F2) (B6, D2, E1) (D2, D6, E1) (D2, E1, F2) (B2, E1, F4) (B3, E1, F4) |
| 145 | 12 | (A1, B6, F3) (A1, D6, F3) (A1, F2, F3) (A1, F1, F4) (B6, C1, F3) (C1, D6, F3) (C1, F2, F3) (C1, F1, F4) (B6, E1, F3) (D6, E1, F3) (E1, F2, F3) (E1, F1, F4) |
| 146 | 3 | (A1, D4, F4) (C1, D4, F4) (D4, E1, F4) |
| 148 | 9 | (A1, B5, D2) (A1, B4, F4) (A1, D1, F4) (B5, C1, D2) (B4, C1, F4) (C1, D1, F4) (B5, D2, E1) (B4, E1, F4) (D1, E1, F4) |
| 149 | 6 | (A1, B5, F3) (A1, D2, F3) (B5, C1, F3) (C1, D2, F3) (B5, E1, F3) (D2, E1, F3) |
| 150 | 9 | (A1, B6, F4) (A1, D6, F4) (A1, F2, F4) (B6, C1, F4) (C1, D6, F4) (C1, F2, F4) (B6, E1, F4) (D6, E1, F4) (E1, F2, F4) |
| 154 | 6 | (A1, B5, F4) (A1, D2, F4) (B5, C1, F4) (C1, D2, F4) (B5, E1, F4) (D2, E1, F4) |
| 155 | 3 | (A1, F3, F4) (C1, F3, F4) (E1, F3, F4) |
| 200 | 3 | (A1, C1) (A1, E1) (C1, E1) |
| 210 | 9 | (A1, B1, C1) (A1, C1, D5) (A1, C1, F5) (A1, B1, E1) (A1, D5, E1) (A1, E1, F5) (B1, C1, E1) (C1, D5, E1) (C1, E1, F5) |
| 212 | 3 | (A1, C1, D3) (A1, D3, E1) (C1, D3, E1) |
| 214 | 6 | (A1, B2, C1) (A1, B3, C1) (A1, B2, E1) (A1, B3, E1) (B2, C1, E1) (B3, C1, E1) |
| 215 | 3 | (A1, C1, F1) (A1, E1, F1) (C1, E1, F1) |
| 216 | 3 | (A1, C1, D4) (A1, D4, E1) (C1, D4, E1) |
| 218 | 6 | (A1, B4, C1) (A1, C1, D1) (A1, B4, E1) (A1, D1, E1) (B4, C1, E1) (C1, D1, E1) |
| 220 | 9 | (A1, B6, C1) (A1, C1, D6) (A1, C1, F2) (A1, B6, E1) (A1, D6, E1) (A1, E1, F2) (B6, C1, E1) (C1, D6, E1) (C1, E1, F2) |
| 224 | 6 | (A1, B5, C1) (A1, C1, D2) (A1, B5, E1) (A1, D2, E1) (B5, C1, E1) (C1, D2, E1) |
| 225 | 3 | (A1, C1, F3) (A1, E1, F3) (C1, E1, F3) |
| 230 | 3 | (A1, C1, F4) (A1, E1, F4) (C1, E1, F4) |

<!-- scores end -->
