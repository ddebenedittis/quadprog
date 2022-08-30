#pragma once

#include "quadprog/solve.QP.hpp"

#include <Eigen/Core>

/// @brief Solves the following problem:
/// Minimize     1/2 x^T G x + g0^T x,
/// Subject to   CI x + ci0 >= 0
/// 
/// @param[in]  G 
/// @param[in]  g0 
/// @param[in]  C 
/// @param[in]  c0 
/// @param[out] x 
/// @param[in]  meq 
/// @param[in]  factorized 
/// @return int 
int solve_quadprog(
    Eigen::MatrixXd& G,
    Eigen::VectorXd& g0,
    Eigen::MatrixXd& C,
    Eigen::VectorXd& c0,
    Eigen::VectorXd& x,
    int meq=0,
    int factorized=0
);