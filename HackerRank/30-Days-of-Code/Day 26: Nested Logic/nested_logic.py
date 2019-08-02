d_actual, m_actual, y_actual = map(int, input().strip().split())
d_expected, m_expected, y_expected = map(int, input().strip().split())

fine = 0

if y_actual == y_expected and m_actual == m_expected and d_expected < d_actual:
    fine = 15 * (d_actual - d_expected)
elif y_actual == y_expected and m_expected < m_actual:
    fine = 500 * (m_actual - m_expected)
elif y_expected < y_actual:
    fine = 10000
else:
    fine = 0

print(fine)
