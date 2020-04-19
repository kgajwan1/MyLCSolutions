//LC 1030 Matrix Cells in Distance Order

class Solution {
public:
vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
  vector<vector<int>> res = { { r0, c0 } };
  auto max_d = max({ r0 + c0, c0 + R - r0, r0 + C - c0, R - r0 + C - c0 });
  for (auto d = 1; d <= max_d; ++d) {
    for (int x = d; x >= -d; --x) {
      auto r1 = r0 + x, c1_a = c0 + d - abs(x), c1_b = c0 + abs(x) - d;
      if (r1 >= 0 && r1 < R) {
        if (c1_a >= 0 && c1_a < C) res.push_back({ r1, c1_a });
        if (c1_a != c1_b && c1_b >= 0 && c1_b < C) res.push_back({ r1, c1_b });
      }
    }
  }
  return res;
}
};

