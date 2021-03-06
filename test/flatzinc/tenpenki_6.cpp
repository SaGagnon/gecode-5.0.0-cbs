/* -*- mode: C++; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/*
 *  Main authors:
 *     Guido Tack <tack@gecode.org>
 *
 *  Copyright:
 *     Guido Tack, 2014
 *
 *  Last modified:
 *     $Date: 2014-11-04 13:28:32 +0100 (Tue, 04 Nov 2014) $ by $Author: schulte $
 *     $Revision: 14287 $
 *
 *  This file is part of Gecode, the generic constraint
 *  development environment:
 *     http://www.gecode.org
 *
 *  Permission is hereby granted, free of charge, to any person obtaining
 *  a copy of this software and associated documentation files (the
 *  "Software"), to deal in the Software without restriction, including
 *  without limitation the rights to use, copy, modify, merge, publish,
 *  distribute, sublicense, and/or sell copies of the Software, and to
 *  permit persons to whom the Software is furnished to do so, subject to
 *  the following conditions:
 *
 *  The above copyright notice and this permission notice shall be
 *  included in all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 *  LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 *  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 *  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#include "test/flatzinc.hh"

namespace Test { namespace FlatZinc {

  namespace {
    /// Helper class to create and register tests
    class Create {
    public:

      /// Perform creation and registration
      Create(void) {
        (void) new FlatZincTest("tenpenki::6",
std::string("predicate bool_lin_ge(array [int] of int: a, array [int] of var bool: x, var int: c);\n\
predicate bool_lin_gt(array [int] of int: a, array [int] of var bool: x, var int: c);\n\
predicate bool_lin_lt(array [int] of int: a, array [int] of var bool: x, var int: c);\n\
predicate bool_lin_ne(array [int] of int: a, array [int] of var bool: x, var int: c);\n\
var bool: BOOL____00003 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00004 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00006 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00007 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00009 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00010 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00012 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00013 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00015 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00016 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00018 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00019 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00021 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00022 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00024 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00025 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00031 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00032 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00034 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00035 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00037 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00038 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00040 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00041 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00043 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00044 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00046 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00047 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00049 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00050 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00054 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00055 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00057 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00058 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00059 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00060 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00062 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00063 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00064 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00065 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00067 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00068 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00069 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00070 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00072 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00073 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00074 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00075 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00076 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00077 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00079 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00080 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00081 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00082 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00083 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00084 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00086 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00087 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00088 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00089 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00090 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00091 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00093 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00094 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00095 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00096 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00097 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00098 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00100 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00101 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00102 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00103 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00104 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00105 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00107 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00108 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00119 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00120 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00130 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00131 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00133 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00134 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00136 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00137 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00147 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00148 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00150 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00151 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00153 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00154 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00163 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00164 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00166 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00167 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00169 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00170 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00172 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00173 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00181 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00182 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00184 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00185 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00187 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00188 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00190 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00191 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00193 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00194 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00201 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00202 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00204 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00205 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00207 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00208 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00210 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00211 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00213 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00214 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00216 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00217 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00226 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00227 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00229 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00230 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00232 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00233 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00235 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00236 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00242 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00243 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00245 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00246 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00248 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00249 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00251 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00252 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00254 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00255 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00257 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00258 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00260 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00261 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00269 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00270 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00272 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00273 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00275 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00276 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00278 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00279 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00281 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00282 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00292 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00293 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00295 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00296 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00298 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00299 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00310 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00311 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00313 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00314 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00326 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00327 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00331 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00332 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00334 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00335 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00336 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00337 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00339 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00340 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00341 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00342 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00344 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00345 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00346 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00347 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00349 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00350 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00351 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00352 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00353 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00354 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00356 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00357 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00358 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00359 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00360 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00361 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00363 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00364 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00365 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00366 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00367 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00368 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00370 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00371 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00372 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00373 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00374 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00375 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00377 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00378 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00379 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00380 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00381 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00382 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00384 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00385 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00388 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00389 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00391 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00392 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00393 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00394 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00396 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00397 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00398 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00399 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00401 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00402 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00403 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00404 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00405 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00406 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00408 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00409 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00410 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00411 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00412 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00413 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00415 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00416 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00417 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00418 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00419 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00420 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00422 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00423 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00424 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00425 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00426 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00427 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00429 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00430 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00431 :: is_defined_var :: var_is_introduced;\n")+"\
var bool: BOOL____00432 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00433 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00434 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00436 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00437 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00438 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00439 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00440 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00441 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00443 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00444 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00447 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00448 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00450 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00451 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00452 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00453 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00455 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00456 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00457 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00458 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00460 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00461 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00462 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00463 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00465 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00466 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00467 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00468 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00469 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00470 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00472 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00473 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00474 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00475 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00476 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00477 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00479 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00480 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00481 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00482 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00483 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00484 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00486 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00487 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00488 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00489 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00490 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00491 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00493 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00494 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00495 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00496 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00497 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00498 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00500 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00501 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00504 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00505 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00507 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00508 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00509 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00510 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00511 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00512 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00514 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00515 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00516 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00517 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00518 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00519 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00521 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00522 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00523 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00524 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00525 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00526 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00528 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00529 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00530 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00531 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00532 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00533 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00535 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00536 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00537 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00538 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00539 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00540 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00542 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00543 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00544 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00545 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00546 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00547 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00549 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00550 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00551 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00552 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00553 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00554 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00556 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00557 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00558 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00559 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00560 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00561 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00563 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00564 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00569 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00570 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00572 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00573 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00575 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00576 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00578 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00579 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00581 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00582 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00584 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00585 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00587 :: is_defined_var :: var_is_introduced;\n\
var bool: BOOL____00588 :: is_defined_var :: var_is_introduced;\n\
array [1..100] of var bool: a :: output_array([1..10, 1..10]);\n\
array [1..1] of var 1..10: s____00001;\n\
array [1..1] of var 1..10: s____00028;\n\
array [1..2] of var 1..10: s____00053;\n\
array [1..1] of var 1..10: s____00110;\n\
array [1..1] of var 1..10: s____00123;\n\
array [1..1] of var 1..10: s____00140;\n\
array [1..1] of var 1..10: s____00157;\n\
array [1..1] of var 1..10: s____00176;\n\
array [1..1] of var 1..10: s____00197;\n\
array [1..1] of var 1..10: s____00220;\n\
array [1..1] of var 1..10: s____00239;\n\
array [1..1] of var 1..10: s____00264;\n\
array [1..1] of var 1..10: s____00285;\n\
array [1..1] of var 1..10: s____00302;\n\
array [1..1] of var 1..10: s____00317;\n\
array [1..2] of var 1..10: s____00330;\n\
array [1..2] of var 1..10: s____00387;\n\
array [1..2] of var 1..10: s____00446;\n\
array [1..2] of var 1..10: s____00503;\n\
array [1..1] of var 1..10: s____00566;\n\
constraint array_bool_and([BOOL____00003, BOOL____00004], a[20]);\n\
constraint array_bool_and([BOOL____00006, BOOL____00007], a[30]);\n\
constraint array_bool_and([BOOL____00009, BOOL____00010], a[40]);\n\
constraint array_bool_and([BOOL____00012, BOOL____00013], a[50]);\n\
constraint array_bool_and([BOOL____00015, BOOL____00016], a[60]);\n\
constraint array_bool_and([BOOL____00018, BOOL____00019], a[70]);\n\
constraint array_bool_and([BOOL____00021, BOOL____00022], a[80]);\n\
constraint array_bool_and([BOOL____00024, BOOL____00025], a[90]);\n\
constraint array_bool_and([BOOL____00031, BOOL____00032], a[29]);\n\
constraint array_bool_and([BOOL____00034, BOOL____00035], a[39]);\n\
constraint array_bool_and([BOOL____00037, BOOL____00038], a[49]);\n\
constraint array_bool_and([BOOL____00040, BOOL____00041], a[59]);\n\
constraint array_bool_and([BOOL____00043, BOOL____00044], a[69]);\n\
constraint array_bool_and([BOOL____00046, BOOL____00047], a[79]);\n\
constraint array_bool_and([BOOL____00049, BOOL____00050], a[89]);\n\
constraint array_bool_and([BOOL____00057, BOOL____00058], BOOL____00060) :: defines_var(BOOL____00060);\n\
constraint array_bool_and([BOOL____00062, BOOL____00063], BOOL____00065) :: defines_var(BOOL____00065);\n\
constraint array_bool_and([BOOL____00067, BOOL____00068], BOOL____00070) :: defines_var(BOOL____00070);\n\
constraint array_bool_and([BOOL____00072, BOOL____00073], BOOL____00076) :: defines_var(BOOL____00076);\n\
constraint array_bool_and([BOOL____00074, BOOL____00075], BOOL____00077) :: defines_var(BOOL____00077);\n\
constraint array_bool_and([BOOL____00079, BOOL____00080], BOOL____00083) :: defines_var(BOOL____00083);\n\
constraint array_bool_and([BOOL____00081, BOOL____00082], BOOL____00084) :: defines_var(BOOL____00084);\n\
constraint array_bool_and([BOOL____00086, BOOL____00087], BOOL____00090) :: defines_var(BOOL____00090);\n\
constraint array_bool_and([BOOL____00088, BOOL____00089], BOOL____00091) :: defines_var(BOOL____00091);\n\
constraint array_bool_and([BOOL____00093, BOOL____00094], BOOL____00097) :: defines_var(BOOL____00097);\n\
constraint array_bool_and([BOOL____00095, BOOL____00096], BOOL____00098) :: defines_var(BOOL____00098);\n\
constraint array_bool_and([BOOL____00100, BOOL____00101], BOOL____00104) :: defines_var(BOOL____00104);\n\
constraint array_bool_and([BOOL____00102, BOOL____00103], BOOL____00105) :: defines_var(BOOL____00105);\n\
constraint array_bool_and([BOOL____00119, BOOL____00120], a[87]);\n\
constraint array_bool_and([BOOL____00130, BOOL____00131], a[66]);\n\
constraint array_bool_and([BOOL____00133, BOOL____00134], a[76]);\n\
constraint array_bool_and([BOOL____00136, BOOL____00137], a[86]);\n\
constraint array_bool_and([BOOL____00147, BOOL____00148], a[65]);\n\
constraint array_bool_and([BOOL____00150, BOOL____00151], a[75]);\n\
constraint array_bool_and([BOOL____00153, BOOL____00154], a[85]);\n\
constraint array_bool_and([BOOL____00163, BOOL____00164], a[54]);\n\
constraint array_bool_and([BOOL____00166, BOOL____00167], a[64]);\n\
constraint array_bool_and([BOOL____00169, BOOL____00170], a[74]);\n\
constraint array_bool_and([BOOL____00172, BOOL____00173], a[84]);\n\
constraint array_bool_and([BOOL____00181, BOOL____00182], a[43]);\n\
constraint array_bool_and([BOOL____00184, BOOL____00185], a[53]);\n\
constraint array_bool_and([BOOL____00187, BOOL____00188], a[63]);\n\
constraint array_bool_and([BOOL____00190, BOOL____00191], a[73]);\n\
constraint array_bool_and([BOOL____00193, BOOL____00194], a[83]);\n\
constraint array_bool_and([BOOL____00201, BOOL____00202], a[32]);\n\
constraint array_bool_and([BOOL____00204, BOOL____00205], a[42]);\n\
constraint array_bool_and([BOOL____00207, BOOL____00208], a[52]);\n\
constraint array_bool_and([BOOL____00210, BOOL____00211], a[62]);\n\
constraint array_bool_and([BOOL____00213, BOOL____00214], a[72]);\n\
constraint array_bool_and([BOOL____00216, BOOL____00217], a[82]);\n\
constraint array_bool_and([BOOL____00226, BOOL____00227], a[51]);\n\
constraint array_bool_and([BOOL____00229, BOOL____00230], a[61]);\n\
constraint array_bool_and([BOOL____00232, BOOL____00233], a[71]);\n\
constraint array_bool_and([BOOL____00235, BOOL____00236], a[81]);\n\
constraint array_bool_and([BOOL____00242, BOOL____00243], a[93]);\n\
constraint array_bool_and([BOOL____00245, BOOL____00246], a[94]);\n"+"\
constraint array_bool_and([BOOL____00248, BOOL____00249], a[95]);\n\
constraint array_bool_and([BOOL____00251, BOOL____00252], a[96]);\n\
constraint array_bool_and([BOOL____00254, BOOL____00255], a[97]);\n\
constraint array_bool_and([BOOL____00257, BOOL____00258], a[98]);\n\
constraint array_bool_and([BOOL____00260, BOOL____00261], a[99]);\n\
constraint array_bool_and([BOOL____00269, BOOL____00270], a[85]);\n\
constraint array_bool_and([BOOL____00272, BOOL____00273], a[86]);\n\
constraint array_bool_and([BOOL____00275, BOOL____00276], a[87]);\n\
constraint array_bool_and([BOOL____00278, BOOL____00279], a[88]);\n\
constraint array_bool_and([BOOL____00281, BOOL____00282], a[89]);\n\
constraint array_bool_and([BOOL____00292, BOOL____00293], a[77]);\n\
constraint array_bool_and([BOOL____00295, BOOL____00296], a[78]);\n\
constraint array_bool_and([BOOL____00298, BOOL____00299], a[79]);\n\
constraint array_bool_and([BOOL____00310, BOOL____00311], a[68]);\n\
constraint array_bool_and([BOOL____00313, BOOL____00314], a[69]);\n\
constraint array_bool_and([BOOL____00326, BOOL____00327], a[59]);\n\
constraint array_bool_and([BOOL____00334, BOOL____00335], BOOL____00337) :: defines_var(BOOL____00337);\n\
constraint array_bool_and([BOOL____00339, BOOL____00340], BOOL____00342) :: defines_var(BOOL____00342);\n\
constraint array_bool_and([BOOL____00344, BOOL____00345], BOOL____00347) :: defines_var(BOOL____00347);\n\
constraint array_bool_and([BOOL____00349, BOOL____00350], BOOL____00353) :: defines_var(BOOL____00353);\n\
constraint array_bool_and([BOOL____00351, BOOL____00352], BOOL____00354) :: defines_var(BOOL____00354);\n\
constraint array_bool_and([BOOL____00356, BOOL____00357], BOOL____00360) :: defines_var(BOOL____00360);\n\
constraint array_bool_and([BOOL____00358, BOOL____00359], BOOL____00361) :: defines_var(BOOL____00361);\n\
constraint array_bool_and([BOOL____00363, BOOL____00364], BOOL____00367) :: defines_var(BOOL____00367);\n\
constraint array_bool_and([BOOL____00365, BOOL____00366], BOOL____00368) :: defines_var(BOOL____00368);\n\
constraint array_bool_and([BOOL____00370, BOOL____00371], BOOL____00374) :: defines_var(BOOL____00374);\n\
constraint array_bool_and([BOOL____00372, BOOL____00373], BOOL____00375) :: defines_var(BOOL____00375);\n\
constraint array_bool_and([BOOL____00377, BOOL____00378], BOOL____00381) :: defines_var(BOOL____00381);\n\
constraint array_bool_and([BOOL____00379, BOOL____00380], BOOL____00382) :: defines_var(BOOL____00382);\n\
constraint array_bool_and([BOOL____00391, BOOL____00392], BOOL____00394) :: defines_var(BOOL____00394);\n\
constraint array_bool_and([BOOL____00396, BOOL____00397], BOOL____00399) :: defines_var(BOOL____00399);\n\
constraint array_bool_and([BOOL____00401, BOOL____00402], BOOL____00405) :: defines_var(BOOL____00405);\n\
constraint array_bool_and([BOOL____00403, BOOL____00404], BOOL____00406) :: defines_var(BOOL____00406);\n\
constraint array_bool_and([BOOL____00408, BOOL____00409], BOOL____00412) :: defines_var(BOOL____00412);\n\
constraint array_bool_and([BOOL____00410, BOOL____00411], BOOL____00413) :: defines_var(BOOL____00413);\n\
constraint array_bool_and([BOOL____00415, BOOL____00416], BOOL____00419) :: defines_var(BOOL____00419);\n\
constraint array_bool_and([BOOL____00417, BOOL____00418], BOOL____00420) :: defines_var(BOOL____00420);\n\
constraint array_bool_and([BOOL____00422, BOOL____00423], BOOL____00426) :: defines_var(BOOL____00426);\n\
constraint array_bool_and([BOOL____00424, BOOL____00425], BOOL____00427) :: defines_var(BOOL____00427);\n\
constraint array_bool_and([BOOL____00429, BOOL____00430], BOOL____00433) :: defines_var(BOOL____00433);\n\
constraint array_bool_and([BOOL____00431, BOOL____00432], BOOL____00434) :: defines_var(BOOL____00434);\n\
constraint array_bool_and([BOOL____00436, BOOL____00437], BOOL____00440) :: defines_var(BOOL____00440);\n\
constraint array_bool_and([BOOL____00438, BOOL____00439], BOOL____00441) :: defines_var(BOOL____00441);\n\
constraint array_bool_and([BOOL____00450, BOOL____00451], BOOL____00453) :: defines_var(BOOL____00453);\n\
constraint array_bool_and([BOOL____00455, BOOL____00456], BOOL____00458) :: defines_var(BOOL____00458);\n\
constraint array_bool_and([BOOL____00460, BOOL____00461], BOOL____00463) :: defines_var(BOOL____00463);\n\
constraint array_bool_and([BOOL____00465, BOOL____00466], BOOL____00469) :: defines_var(BOOL____00469);\n\
constraint array_bool_and([BOOL____00467, BOOL____00468], BOOL____00470) :: defines_var(BOOL____00470);\n\
constraint array_bool_and([BOOL____00472, BOOL____00473], BOOL____00476) :: defines_var(BOOL____00476);\n\
constraint array_bool_and([BOOL____00474, BOOL____00475], BOOL____00477) :: defines_var(BOOL____00477);\n\
constraint array_bool_and([BOOL____00479, BOOL____00480], BOOL____00483) :: defines_var(BOOL____00483);\n\
constraint array_bool_and([BOOL____00481, BOOL____00482], BOOL____00484) :: defines_var(BOOL____00484);\n\
constraint array_bool_and([BOOL____00486, BOOL____00487], BOOL____00490) :: defines_var(BOOL____00490);\n\
constraint array_bool_and([BOOL____00488, BOOL____00489], BOOL____00491) :: defines_var(BOOL____00491);\n\
constraint array_bool_and([BOOL____00493, BOOL____00494], BOOL____00497) :: defines_var(BOOL____00497);\n\
constraint array_bool_and([BOOL____00495, BOOL____00496], BOOL____00498) :: defines_var(BOOL____00498);\n\
constraint array_bool_and([BOOL____00507, BOOL____00508], BOOL____00511) :: defines_var(BOOL____00511);\n\
constraint array_bool_and([BOOL____00509, BOOL____00510], BOOL____00512) :: defines_var(BOOL____00512);\n\
constraint array_bool_and([BOOL____00514, BOOL____00515], BOOL____00518) :: defines_var(BOOL____00518);\n\
constraint array_bool_and([BOOL____00516, BOOL____00517], BOOL____00519) :: defines_var(BOOL____00519);\n\
constraint array_bool_and([BOOL____00521, BOOL____00522], BOOL____00525) :: defines_var(BOOL____00525);\n\
constraint array_bool_and([BOOL____00523, BOOL____00524], BOOL____00526) :: defines_var(BOOL____00526);\n\
constraint array_bool_and([BOOL____00528, BOOL____00529], BOOL____00532) :: defines_var(BOOL____00532);\n\
constraint array_bool_and([BOOL____00530, BOOL____00531], BOOL____00533) :: defines_var(BOOL____00533);\n\
constraint array_bool_and([BOOL____00535, BOOL____00536], BOOL____00539) :: defines_var(BOOL____00539);\n\
constraint array_bool_and([BOOL____00537, BOOL____00538], BOOL____00540) :: defines_var(BOOL____00540);\n\
constraint array_bool_and([BOOL____00542, BOOL____00543], BOOL____00546) :: defines_var(BOOL____00546);\n\
constraint array_bool_and([BOOL____00544, BOOL____00545], BOOL____00547) :: defines_var(BOOL____00547);\n\
constraint array_bool_and([BOOL____00549, BOOL____00550], BOOL____00553) :: defines_var(BOOL____00553);\n\
constraint array_bool_and([BOOL____00551, BOOL____00552], BOOL____00554) :: defines_var(BOOL____00554);\n\
constraint array_bool_and([BOOL____00556, BOOL____00557], BOOL____00560) :: defines_var(BOOL____00560);\n\
constraint array_bool_and([BOOL____00558, BOOL____00559], BOOL____00561) :: defines_var(BOOL____00561);\n\
constraint array_bool_and([BOOL____00569, BOOL____00570], a[3]);\n\
constraint array_bool_and([BOOL____00572, BOOL____00573], a[4]);\n\
constraint array_bool_and([BOOL____00575, BOOL____00576], a[5]);\n\
constraint array_bool_and([BOOL____00578, BOOL____00579], a[6]);\n\
constraint array_bool_and([BOOL____00581, BOOL____00582], a[7]);\n\
constraint array_bool_and([BOOL____00584, BOOL____00585], a[8]);\n\
constraint array_bool_and([BOOL____00587, BOOL____00588], a[9]);\n\
constraint array_bool_or([BOOL____00055, BOOL____00054], a[8]);\n\
constraint array_bool_or([BOOL____00059, BOOL____00060], a[18]);\n\
constraint array_bool_or([BOOL____00064, BOOL____00065], a[28]);\n\
constraint array_bool_or([BOOL____00069, BOOL____00070], a[38]);\n\
constraint array_bool_or([BOOL____00076, BOOL____00077], a[48]);\n\
constraint array_bool_or([BOOL____00083, BOOL____00084], a[58]);\n\
constraint array_bool_or([BOOL____00090, BOOL____00091], a[68]);\n\
constraint array_bool_or([BOOL____00097, BOOL____00098], a[78]);\n\
constraint array_bool_or([BOOL____00104, BOOL____00105], a[88]);\n\
constraint array_bool_or([BOOL____00108, BOOL____00107], a[98]);\n\
constraint array_bool_or([BOOL____00332, BOOL____00331], a[41]);\n\
constraint array_bool_or([BOOL____00336, BOOL____00337], a[42]);\n\
constraint array_bool_or([BOOL____00341, BOOL____00342], a[43]);\n\
constraint array_bool_or([BOOL____00346, BOOL____00347], a[44]);\n\
constraint array_bool_or([BOOL____00353, BOOL____00354], a[45]);\n\
constraint array_bool_or([BOOL____00360, BOOL____00361], a[46]);\n\
constraint array_bool_or([BOOL____00367, BOOL____00368], a[47]);\n\
constraint array_bool_or([BOOL____00374, BOOL____00375], a[48]);\n\
constraint array_bool_or([BOOL____00381, BOOL____00382], a[49]);\n\
constraint array_bool_or([BOOL____00385, BOOL____00384], a[50]);\n\
constraint array_bool_or([BOOL____00389, BOOL____00388], a[31]);\n\
constraint array_bool_or([BOOL____00393, BOOL____00394], a[32]);\n\
constraint array_bool_or([BOOL____00398, BOOL____00399], a[33]);\n\
constraint array_bool_or([BOOL____00405, BOOL____00406], a[34]);\n\
constraint array_bool_or([BOOL____00412, BOOL____00413], a[35]);\n\
constraint array_bool_or([BOOL____00419, BOOL____00420], a[36]);\n\
constraint array_bool_or([BOOL____00426, BOOL____00427], a[37]);\n\
constraint array_bool_or([BOOL____00433, BOOL____00434], a[38]);\n\
constraint array_bool_or([BOOL____00440, BOOL____00441], a[39]);\n\
constraint array_bool_or([BOOL____00444, BOOL____00443], a[40]);\n\
constraint array_bool_or([BOOL____00448, BOOL____00447], a[21]);\n\
constraint array_bool_or([BOOL____00452, BOOL____00453], a[22]);\n\
constraint array_bool_or([BOOL____00457, BOOL____00458], a[23]);\n\
constraint array_bool_or([BOOL____00462, BOOL____00463], a[24]);\n\
constraint array_bool_or([BOOL____00469, BOOL____00470], a[25]);\n\
constraint array_bool_or([BOOL____00476, BOOL____00477], a[26]);\n\
constraint array_bool_or([BOOL____00483, BOOL____00484], a[27]);\n\
constraint array_bool_or([BOOL____00490, BOOL____00491], a[28]);\n\
constraint array_bool_or([BOOL____00497, BOOL____00498], a[29]);\n\
constraint array_bool_or([BOOL____00501, BOOL____00500], a[30]);\n\
constraint array_bool_or([BOOL____00505, BOOL____00504], a[11]);\n\
constraint array_bool_or([BOOL____00511, BOOL____00512], a[12]);\n\
constraint array_bool_or([BOOL____00518, BOOL____00519], a[13]);\n\
constraint array_bool_or([BOOL____00525, BOOL____00526], a[14]);\n\
constraint array_bool_or([BOOL____00532, BOOL____00533], a[15]);\n\
constraint array_bool_or([BOOL____00539, BOOL____00540], a[16]);\n\
constraint array_bool_or([BOOL____00546, BOOL____00547], a[17]);\n\
constraint array_bool_or([BOOL____00553, BOOL____00554], a[18]);\n\
constraint array_bool_or([BOOL____00560, BOOL____00561], a[19]);\n\
constraint array_bool_or([BOOL____00564, BOOL____00563], a[20]);\n\
constraint int_le_reif(s____00001[1], 1, a[10]);\n\
constraint int_le_reif(s____00001[1], 2, BOOL____00003) :: defines_var(BOOL____00003);\n\
constraint int_le_reif(s____00001[1], 3, BOOL____00006) :: defines_var(BOOL____00006);\n\
constraint int_le_reif(s____00001[1], 4, BOOL____00009) :: defines_var(BOOL____00009);\n\
constraint int_le_reif(s____00001[1], 5, BOOL____00012) :: defines_var(BOOL____00012);\n\
constraint int_le_reif(s____00001[1], 6, BOOL____00015) :: defines_var(BOOL____00015);\n\
constraint int_le_reif(s____00001[1], 7, BOOL____00018) :: defines_var(BOOL____00018);\n\
constraint int_le_reif(s____00001[1], 8, BOOL____00021) :: defines_var(BOOL____00021);\n\
constraint int_le_reif(s____00001[1], 9, BOOL____00024) :: defines_var(BOOL____00024);\n\
constraint int_le_reif(s____00028[1], 1, a[9]);\n\
constraint int_le_reif(s____00028[1], 2, a[19]);\n\
constraint int_le_reif(s____00028[1], 3, BOOL____00031) :: defines_var(BOOL____00031);\n\
constraint int_le_reif(s____00028[1], 4, BOOL____00034) :: defines_var(BOOL____00034);\n\
constraint int_le_reif(s____00028[1], 5, BOOL____00037) :: defines_var(BOOL____00037);\n\
constraint int_le_reif(s____00028[1], 6, BOOL____00040) :: defines_var(BOOL____00040);\n\
constraint int_le_reif(s____00028[1], 7, BOOL____00043) :: defines_var(BOOL____00043);\n\
constraint int_le_reif(s____00028[1], 8, BOOL____00046) :: defines_var(BOOL____00046);\n\
constraint int_le_reif(s____00028[1], 9, BOOL____00049) :: defines_var(BOOL____00049);\n\
constraint int_le_reif(s____00053[1], 1, BOOL____00054) :: defines_var(BOOL____00054);\n\
constraint int_le_reif(s____00053[1], 2, BOOL____00057) :: defines_var(BOOL____00057);\n\
constraint int_le_reif(s____00053[1], 3, BOOL____00062) :: defines_var(BOOL____00062);\n\
constraint int_le_reif(s____00053[1], 4, BOOL____00067) :: defines_var(BOOL____00067);\n\
constraint int_le_reif(s____00053[1], 5, BOOL____00072) :: defines_var(BOOL____00072);\n\
constraint int_le_reif(s____00053[1], 6, BOOL____00079) :: defines_var(BOOL____00079);\n\
constraint int_le_reif(s____00053[1], 7, BOOL____00086) :: defines_var(BOOL____00086);\n\
constraint int_le_reif(s____00053[1], 8, BOOL____00093) :: defines_var(BOOL____00093);\n\
constraint int_le_reif(s____00053[1], 9, BOOL____00100) :: defines_var(BOOL____00100);\n\
constraint int_le_reif(s____00053[2], 1, BOOL____00055) :: defines_var(BOOL____00055);\n\
constraint int_le_reif(s____00053[2], 2, BOOL____00059) :: defines_var(BOOL____00059);\n\
constraint int_le_reif(s____00053[2], 3, BOOL____00064) :: defines_var(BOOL____00064);\n\
constraint int_le_reif(s____00053[2], 4, BOOL____00069) :: defines_var(BOOL____00069);\n\
constraint int_le_reif(s____00053[2], 5, BOOL____00074) :: defines_var(BOOL____00074);\n\
constraint int_le_reif(s____00053[2], 6, BOOL____00081) :: defines_var(BOOL____00081);\n\
constraint int_le_reif(s____00053[2], 7, BOOL____00088) :: defines_var(BOOL____00088);\n\
constraint int_le_reif(s____00053[2], 8, BOOL____00095) :: defines_var(BOOL____00095);\n\
constraint int_le_reif(s____00053[2], 9, BOOL____00102) :: defines_var(BOOL____00102);\n\
constraint int_le_reif(s____00110[1], 1, a[7]);\n\
constraint int_le_reif(s____00110[1], 2, a[17]);\n\
constraint int_le_reif(s____00110[1], 3, a[27]);\n\
constraint int_le_reif(s____00110[1], 4, a[37]);\n\
constraint int_le_reif(s____00110[1], 5, a[47]);\n\
constraint int_le_reif(s____00110[1], 6, a[57]);\n\
constraint int_le_reif(s____00110[1], 7, a[67]);\n\
constraint int_le_reif(s____00110[1], 8, a[77]);\n\
constraint int_le_reif(s____00110[1], 9, BOOL____00119) :: defines_var(BOOL____00119);\n\
constraint int_le_reif(s____00123[1], 1, a[6]);\n\
constraint int_le_reif(s____00123[1], 2, a[16]);\n\
constraint int_le_reif(s____00123[1], 3, a[26]);\n\
constraint int_le_reif(s____00123[1], 4, a[36]);\n\
constraint int_le_reif(s____00123[1], 5, a[46]);\n\
constraint int_le_reif(s____00123[1], 6, a[56]);\n\
constraint int_le_reif(s____00123[1], 7, BOOL____00130) :: defines_var(BOOL____00130);\n\
constraint int_le_reif(s____00123[1], 8, BOOL____00133) :: defines_var(BOOL____00133);\n\
constraint int_le_reif(s____00123[1], 9, BOOL____00136) :: defines_var(BOOL____00136);\n\
constraint int_le_reif(s____00140[1], 1, a[5]);\n\
constraint int_le_reif(s____00140[1], 2, a[15]);\n\
constraint int_le_reif(s____00140[1], 3, a[25]);\n\
constraint int_le_reif(s____00140[1], 4, a[35]);\n\
constraint int_le_reif(s____00140[1], 5, a[45]);\n\
constraint int_le_reif(s____00140[1], 6, a[55]);\n\
constraint int_le_reif(s____00140[1], 7, BOOL____00147) :: defines_var(BOOL____00147);\n\
constraint int_le_reif(s____00140[1], 8, BOOL____00150) :: defines_var(BOOL____00150);\n\
constraint int_le_reif(s____00140[1], 9, BOOL____00153) :: defines_var(BOOL____00153);\n\
constraint int_le_reif(s____00157[1], 1, a[4]);\n\
constraint int_le_reif(s____00157[1], 2, a[14]);\n\
constraint int_le_reif(s____00157[1], 3, a[24]);\n\
constraint int_le_reif(s____00157[1], 4, a[34]);\n\
constraint int_le_reif(s____00157[1], 5, a[44]);\n\
constraint int_le_reif(s____00157[1], 6, BOOL____00163) :: defines_var(BOOL____00163);\n\
constraint int_le_reif(s____00157[1], 7, BOOL____00166) :: defines_var(BOOL____00166);\n\
constraint int_le_reif(s____00157[1], 8, BOOL____00169) :: defines_var(BOOL____00169);\n"+"\
constraint int_le_reif(s____00157[1], 9, BOOL____00172) :: defines_var(BOOL____00172);\n\
constraint int_le_reif(s____00176[1], 1, a[3]);\n\
constraint int_le_reif(s____00176[1], 2, a[13]);\n\
constraint int_le_reif(s____00176[1], 3, a[23]);\n\
constraint int_le_reif(s____00176[1], 4, a[33]);\n\
constraint int_le_reif(s____00176[1], 5, BOOL____00181) :: defines_var(BOOL____00181);\n\
constraint int_le_reif(s____00176[1], 6, BOOL____00184) :: defines_var(BOOL____00184);\n\
constraint int_le_reif(s____00176[1], 7, BOOL____00187) :: defines_var(BOOL____00187);\n\
constraint int_le_reif(s____00176[1], 8, BOOL____00190) :: defines_var(BOOL____00190);\n\
constraint int_le_reif(s____00176[1], 9, BOOL____00193) :: defines_var(BOOL____00193);\n\
constraint int_le_reif(s____00197[1], 1, a[2]);\n\
constraint int_le_reif(s____00197[1], 2, a[12]);\n\
constraint int_le_reif(s____00197[1], 3, a[22]);\n\
constraint int_le_reif(s____00197[1], 4, BOOL____00201) :: defines_var(BOOL____00201);\n\
constraint int_le_reif(s____00197[1], 5, BOOL____00204) :: defines_var(BOOL____00204);\n\
constraint int_le_reif(s____00197[1], 6, BOOL____00207) :: defines_var(BOOL____00207);\n\
constraint int_le_reif(s____00197[1], 7, BOOL____00210) :: defines_var(BOOL____00210);\n\
constraint int_le_reif(s____00197[1], 8, BOOL____00213) :: defines_var(BOOL____00213);\n\
constraint int_le_reif(s____00197[1], 9, BOOL____00216) :: defines_var(BOOL____00216);\n\
constraint int_le_reif(s____00220[1], 1, a[1]);\n\
constraint int_le_reif(s____00220[1], 2, a[11]);\n\
constraint int_le_reif(s____00220[1], 3, a[21]);\n\
constraint int_le_reif(s____00220[1], 4, a[31]);\n\
constraint int_le_reif(s____00220[1], 5, a[41]);\n\
constraint int_le_reif(s____00220[1], 6, BOOL____00226) :: defines_var(BOOL____00226);\n\
constraint int_le_reif(s____00220[1], 7, BOOL____00229) :: defines_var(BOOL____00229);\n\
constraint int_le_reif(s____00220[1], 8, BOOL____00232) :: defines_var(BOOL____00232);\n\
constraint int_le_reif(s____00220[1], 9, BOOL____00235) :: defines_var(BOOL____00235);\n\
constraint int_le_reif(s____00239[1], 1, a[91]);\n\
constraint int_le_reif(s____00239[1], 2, a[92]);\n\
constraint int_le_reif(s____00239[1], 3, BOOL____00242) :: defines_var(BOOL____00242);\n\
constraint int_le_reif(s____00239[1], 4, BOOL____00245) :: defines_var(BOOL____00245);\n\
constraint int_le_reif(s____00239[1], 5, BOOL____00248) :: defines_var(BOOL____00248);\n\
constraint int_le_reif(s____00239[1], 6, BOOL____00251) :: defines_var(BOOL____00251);\n\
constraint int_le_reif(s____00239[1], 7, BOOL____00254) :: defines_var(BOOL____00254);\n\
constraint int_le_reif(s____00239[1], 8, BOOL____00257) :: defines_var(BOOL____00257);\n\
constraint int_le_reif(s____00239[1], 9, BOOL____00260) :: defines_var(BOOL____00260);\n\
constraint int_le_reif(s____00264[1], 1, a[81]);\n\
constraint int_le_reif(s____00264[1], 2, a[82]);\n\
constraint int_le_reif(s____00264[1], 3, a[83]);\n\
constraint int_le_reif(s____00264[1], 4, a[84]);\n\
constraint int_le_reif(s____00264[1], 5, BOOL____00269) :: defines_var(BOOL____00269);\n\
constraint int_le_reif(s____00264[1], 6, BOOL____00272) :: defines_var(BOOL____00272);\n\
constraint int_le_reif(s____00264[1], 7, BOOL____00275) :: defines_var(BOOL____00275);\n\
constraint int_le_reif(s____00264[1], 8, BOOL____00278) :: defines_var(BOOL____00278);\n\
constraint int_le_reif(s____00264[1], 9, BOOL____00281) :: defines_var(BOOL____00281);\n\
constraint int_le_reif(s____00285[1], 1, a[71]);\n\
constraint int_le_reif(s____00285[1], 2, a[72]);\n\
constraint int_le_reif(s____00285[1], 3, a[73]);\n\
constraint int_le_reif(s____00285[1], 4, a[74]);\n\
constraint int_le_reif(s____00285[1], 5, a[75]);\n\
constraint int_le_reif(s____00285[1], 6, a[76]);\n\
constraint int_le_reif(s____00285[1], 7, BOOL____00292) :: defines_var(BOOL____00292);\n\
constraint int_le_reif(s____00285[1], 8, BOOL____00295) :: defines_var(BOOL____00295);\n\
constraint int_le_reif(s____00285[1], 9, BOOL____00298) :: defines_var(BOOL____00298);\n\
constraint int_le_reif(s____00302[1], 1, a[61]);\n\
constraint int_le_reif(s____00302[1], 2, a[62]);\n\
constraint int_le_reif(s____00302[1], 3, a[63]);\n\
constraint int_le_reif(s____00302[1], 4, a[64]);\n\
constraint int_le_reif(s____00302[1], 5, a[65]);\n\
constraint int_le_reif(s____00302[1], 6, a[66]);\n\
constraint int_le_reif(s____00302[1], 7, a[67]);\n\
constraint int_le_reif(s____00302[1], 8, BOOL____00310) :: defines_var(BOOL____00310);\n\
constraint int_le_reif(s____00302[1], 9, BOOL____00313) :: defines_var(BOOL____00313);\n\
constraint int_le_reif(s____00317[1], 1, a[51]);\n\
constraint int_le_reif(s____00317[1], 2, a[52]);\n\
constraint int_le_reif(s____00317[1], 3, a[53]);\n\
constraint int_le_reif(s____00317[1], 4, a[54]);\n\
constraint int_le_reif(s____00317[1], 5, a[55]);\n\
constraint int_le_reif(s____00317[1], 6, a[56]);\n\
constraint int_le_reif(s____00317[1], 7, a[57]);\n\
constraint int_le_reif(s____00317[1], 8, a[58]);\n\
constraint int_le_reif(s____00317[1], 9, BOOL____00326) :: defines_var(BOOL____00326);\n\
constraint int_le_reif(s____00330[1], 1, BOOL____00331) :: defines_var(BOOL____00331);\n\
constraint int_le_reif(s____00330[1], 2, BOOL____00334) :: defines_var(BOOL____00334);\n\
constraint int_le_reif(s____00330[1], 3, BOOL____00339) :: defines_var(BOOL____00339);\n\
constraint int_le_reif(s____00330[1], 4, BOOL____00344) :: defines_var(BOOL____00344);\n\
constraint int_le_reif(s____00330[1], 5, BOOL____00349) :: defines_var(BOOL____00349);\n\
constraint int_le_reif(s____00330[1], 6, BOOL____00356) :: defines_var(BOOL____00356);\n\
constraint int_le_reif(s____00330[1], 7, BOOL____00363) :: defines_var(BOOL____00363);\n\
constraint int_le_reif(s____00330[1], 8, BOOL____00370) :: defines_var(BOOL____00370);\n\
constraint int_le_reif(s____00330[1], 9, BOOL____00377) :: defines_var(BOOL____00377);\n\
constraint int_le_reif(s____00330[2], 1, BOOL____00332) :: defines_var(BOOL____00332);\n\
constraint int_le_reif(s____00330[2], 2, BOOL____00336) :: defines_var(BOOL____00336);\n\
constraint int_le_reif(s____00330[2], 3, BOOL____00341) :: defines_var(BOOL____00341);\n\
constraint int_le_reif(s____00330[2], 4, BOOL____00346) :: defines_var(BOOL____00346);\n\
constraint int_le_reif(s____00330[2], 5, BOOL____00351) :: defines_var(BOOL____00351);\n\
constraint int_le_reif(s____00330[2], 6, BOOL____00358) :: defines_var(BOOL____00358);\n\
constraint int_le_reif(s____00330[2], 7, BOOL____00365) :: defines_var(BOOL____00365);\n\
constraint int_le_reif(s____00330[2], 8, BOOL____00372) :: defines_var(BOOL____00372);\n\
constraint int_le_reif(s____00330[2], 9, BOOL____00379) :: defines_var(BOOL____00379);\n\
constraint int_le_reif(s____00387[1], 1, BOOL____00388) :: defines_var(BOOL____00388);\n\
constraint int_le_reif(s____00387[1], 2, BOOL____00391) :: defines_var(BOOL____00391);\n\
constraint int_le_reif(s____00387[1], 3, BOOL____00396) :: defines_var(BOOL____00396);\n\
constraint int_le_reif(s____00387[1], 4, BOOL____00401) :: defines_var(BOOL____00401);\n\
constraint int_le_reif(s____00387[1], 5, BOOL____00408) :: defines_var(BOOL____00408);\n\
constraint int_le_reif(s____00387[1], 6, BOOL____00415) :: defines_var(BOOL____00415);\n\
constraint int_le_reif(s____00387[1], 7, BOOL____00422) :: defines_var(BOOL____00422);\n\
constraint int_le_reif(s____00387[1], 8, BOOL____00429) :: defines_var(BOOL____00429);\n\
constraint int_le_reif(s____00387[1], 9, BOOL____00436) :: defines_var(BOOL____00436);\n\
constraint int_le_reif(s____00387[2], 1, BOOL____00389) :: defines_var(BOOL____00389);\n\
constraint int_le_reif(s____00387[2], 2, BOOL____00393) :: defines_var(BOOL____00393);\n\
constraint int_le_reif(s____00387[2], 3, BOOL____00398) :: defines_var(BOOL____00398);\n\
constraint int_le_reif(s____00387[2], 4, BOOL____00403) :: defines_var(BOOL____00403);\n\
constraint int_le_reif(s____00387[2], 5, BOOL____00410) :: defines_var(BOOL____00410);\n\
constraint int_le_reif(s____00387[2], 6, BOOL____00417) :: defines_var(BOOL____00417);\n\
constraint int_le_reif(s____00387[2], 7, BOOL____00424) :: defines_var(BOOL____00424);\n\
constraint int_le_reif(s____00387[2], 8, BOOL____00431) :: defines_var(BOOL____00431);\n\
constraint int_le_reif(s____00387[2], 9, BOOL____00438) :: defines_var(BOOL____00438);\n\
constraint int_le_reif(s____00446[1], 1, BOOL____00447) :: defines_var(BOOL____00447);\n\
constraint int_le_reif(s____00446[1], 2, BOOL____00450) :: defines_var(BOOL____00450);\n\
constraint int_le_reif(s____00446[1], 3, BOOL____00455) :: defines_var(BOOL____00455);\n\
constraint int_le_reif(s____00446[1], 4, BOOL____00460) :: defines_var(BOOL____00460);\n\
constraint int_le_reif(s____00446[1], 5, BOOL____00465) :: defines_var(BOOL____00465);\n\
constraint int_le_reif(s____00446[1], 6, BOOL____00472) :: defines_var(BOOL____00472);\n\
constraint int_le_reif(s____00446[1], 7, BOOL____00479) :: defines_var(BOOL____00479);\n\
constraint int_le_reif(s____00446[1], 8, BOOL____00486) :: defines_var(BOOL____00486);\n\
constraint int_le_reif(s____00446[1], 9, BOOL____00493) :: defines_var(BOOL____00493);\n\
constraint int_le_reif(s____00446[2], 1, BOOL____00448) :: defines_var(BOOL____00448);\n\
constraint int_le_reif(s____00446[2], 2, BOOL____00452) :: defines_var(BOOL____00452);\n\
constraint int_le_reif(s____00446[2], 3, BOOL____00457) :: defines_var(BOOL____00457);\n\
constraint int_le_reif(s____00446[2], 4, BOOL____00462) :: defines_var(BOOL____00462);\n\
constraint int_le_reif(s____00446[2], 5, BOOL____00467) :: defines_var(BOOL____00467);\n\
constraint int_le_reif(s____00446[2], 6, BOOL____00474) :: defines_var(BOOL____00474);\n\
constraint int_le_reif(s____00446[2], 7, BOOL____00481) :: defines_var(BOOL____00481);\n\
constraint int_le_reif(s____00446[2], 8, BOOL____00488) :: defines_var(BOOL____00488);\n\
constraint int_le_reif(s____00446[2], 9, BOOL____00495) :: defines_var(BOOL____00495);\n\
constraint int_le_reif(s____00503[1], 1, BOOL____00504) :: defines_var(BOOL____00504);\n\
constraint int_le_reif(s____00503[1], 2, BOOL____00507) :: defines_var(BOOL____00507);\n\
constraint int_le_reif(s____00503[1], 3, BOOL____00514) :: defines_var(BOOL____00514);\n\
constraint int_le_reif(s____00503[1], 4, BOOL____00521) :: defines_var(BOOL____00521);\n\
constraint int_le_reif(s____00503[1], 5, BOOL____00528) :: defines_var(BOOL____00528);\n\
constraint int_le_reif(s____00503[1], 6, BOOL____00535) :: defines_var(BOOL____00535);\n\
constraint int_le_reif(s____00503[1], 7, BOOL____00542) :: defines_var(BOOL____00542);\n\
constraint int_le_reif(s____00503[1], 8, BOOL____00549) :: defines_var(BOOL____00549);\n\
constraint int_le_reif(s____00503[1], 9, BOOL____00556) :: defines_var(BOOL____00556);\n\
constraint int_le_reif(s____00503[2], 1, BOOL____00505) :: defines_var(BOOL____00505);\n\
constraint int_le_reif(s____00503[2], 2, BOOL____00509) :: defines_var(BOOL____00509);\n\
constraint int_le_reif(s____00503[2], 3, BOOL____00516) :: defines_var(BOOL____00516);\n\
constraint int_le_reif(s____00503[2], 4, BOOL____00523) :: defines_var(BOOL____00523);\n\
constraint int_le_reif(s____00503[2], 5, BOOL____00530) :: defines_var(BOOL____00530);\n\
constraint int_le_reif(s____00503[2], 6, BOOL____00537) :: defines_var(BOOL____00537);\n\
constraint int_le_reif(s____00503[2], 7, BOOL____00544) :: defines_var(BOOL____00544);\n\
constraint int_le_reif(s____00503[2], 8, BOOL____00551) :: defines_var(BOOL____00551);\n\
constraint int_le_reif(s____00503[2], 9, BOOL____00558) :: defines_var(BOOL____00558);\n\
constraint int_le_reif(s____00566[1], 1, a[1]);\n\
constraint int_le_reif(s____00566[1], 2, a[2]);\n\
constraint int_le_reif(s____00566[1], 3, BOOL____00569) :: defines_var(BOOL____00569);\n\
constraint int_le_reif(s____00566[1], 4, BOOL____00572) :: defines_var(BOOL____00572);\n\
constraint int_le_reif(s____00566[1], 5, BOOL____00575) :: defines_var(BOOL____00575);\n\
constraint int_le_reif(s____00566[1], 6, BOOL____00578) :: defines_var(BOOL____00578);\n\
constraint int_le_reif(s____00566[1], 7, BOOL____00581) :: defines_var(BOOL____00581);\n\
constraint int_le_reif(s____00566[1], 8, BOOL____00584) :: defines_var(BOOL____00584);\n\
constraint int_le_reif(s____00566[1], 9, BOOL____00587) :: defines_var(BOOL____00587);\n\
constraint int_lin_le([1], [s____00028[1]], 9);\n\
constraint int_lin_le([1], [s____00053[2]], 7);\n\
constraint int_lin_le([1], [s____00110[1]], 3);\n\
constraint int_lin_le([1], [s____00123[1]], 5);\n\
constraint int_lin_le([1], [s____00140[1]], 5);\n\
constraint int_lin_le([1], [s____00157[1]], 6);\n\
constraint int_lin_le([1], [s____00176[1]], 7);\n\
constraint int_lin_le([1], [s____00197[1]], 8);\n\
constraint int_lin_le([1], [s____00220[1]], 6);\n\
constraint int_lin_le([1], [s____00239[1]], 9);\n\
constraint int_lin_le([1], [s____00264[1]], 7);\n\
constraint int_lin_le([1], [s____00285[1]], 5);\n\
constraint int_lin_le([1], [s____00302[1]], 4);\n\
constraint int_lin_le([1], [s____00317[1]], 3);\n\
constraint int_lin_le([1], [s____00330[2]], 7);\n\
constraint int_lin_le([1], [s____00387[2]], 8);\n\
constraint int_lin_le([1], [s____00446[2]], 7);\n\
constraint int_lin_le([1], [s____00566[1]], 9);\n\
constraint int_lin_le([1, -1], [s____00053[1], s____00053[2]], -2);\n\
constraint int_lin_le([1, -1], [s____00330[1], s____00330[2]], -2);\n\
constraint int_lin_le([1, -1], [s____00387[1], s____00387[2]], -2);\n\
constraint int_lin_le([1, -1], [s____00446[1], s____00446[2]], -2);\n\
constraint int_lin_le([1, -1], [s____00503[1], s____00503[2]], -2);\n\
constraint int_lin_le_reif([-1], [s____00001[1]], -10, a[100]);\n\
constraint int_lin_le_reif([-1], [s____00001[1]], -9, BOOL____00025) :: defines_var(BOOL____00025);\n\
constraint int_lin_le_reif([-1], [s____00001[1]], -8, BOOL____00022) :: defines_var(BOOL____00022);\n\
constraint int_lin_le_reif([-1], [s____00001[1]], -7, BOOL____00019) :: defines_var(BOOL____00019);\n\
constraint int_lin_le_reif([-1], [s____00001[1]], -6, BOOL____00016) :: defines_var(BOOL____00016);\n\
constraint int_lin_le_reif([-1], [s____00001[1]], -5, BOOL____00013) :: defines_var(BOOL____00013);\n\
constraint int_lin_le_reif([-1], [s____00001[1]], -4, BOOL____00010) :: defines_var(BOOL____00010);\n\
constraint int_lin_le_reif([-1], [s____00001[1]], -3, BOOL____00007) :: defines_var(BOOL____00007);\n\
constraint int_lin_le_reif([-1], [s____00001[1]], -2, BOOL____00004) :: defines_var(BOOL____00004);\n\
constraint int_lin_le_reif([-1], [s____00028[1]], -9, a[99]);\n\
constraint int_lin_le_reif([-1], [s____00028[1]], -8, BOOL____00050) :: defines_var(BOOL____00050);\n\
constraint int_lin_le_reif([-1], [s____00028[1]], -7, BOOL____00047) :: defines_var(BOOL____00047);\n\
constraint int_lin_le_reif([-1], [s____00028[1]], -6, BOOL____00044) :: defines_var(BOOL____00044);\n\
constraint int_lin_le_reif([-1], [s____00028[1]], -5, BOOL____00041) :: defines_var(BOOL____00041);\n\
constraint int_lin_le_reif([-1], [s____00028[1]], -4, BOOL____00038) :: defines_var(BOOL____00038);\n\
constraint int_lin_le_reif([-1], [s____00028[1]], -3, BOOL____00035) :: defines_var(BOOL____00035);\n\
constraint int_lin_le_reif([-1], [s____00028[1]], -2, BOOL____00032) :: defines_var(BOOL____00032);\n\
constraint int_lin_le_reif([-1], [s____00053[1]], -10, BOOL____00107) :: defines_var(BOOL____00107);\n\
constraint int_lin_le_reif([-1], [s____00053[1]], -9, BOOL____00101) :: defines_var(BOOL____00101);\n\
constraint int_lin_le_reif([-1], [s____00053[1]], -8, BOOL____00094) :: defines_var(BOOL____00094);\n\
constraint int_lin_le_reif([-1], [s____00053[1]], -7, BOOL____00087) :: defines_var(BOOL____00087);\n\
constraint int_lin_le_reif([-1], [s____00053[1]], -6, BOOL____00080) :: defines_var(BOOL____00080);\n\
constraint int_lin_le_reif([-1], [s____00053[1]], -5, BOOL____00073) :: defines_var(BOOL____00073);\n"+"\
constraint int_lin_le_reif([-1], [s____00053[1]], -4, BOOL____00068) :: defines_var(BOOL____00068);\n\
constraint int_lin_le_reif([-1], [s____00053[1]], -3, BOOL____00063) :: defines_var(BOOL____00063);\n\
constraint int_lin_le_reif([-1], [s____00053[1]], -2, BOOL____00058) :: defines_var(BOOL____00058);\n\
constraint int_lin_le_reif([-1], [s____00053[2]], -7, BOOL____00108) :: defines_var(BOOL____00108);\n\
constraint int_lin_le_reif([-1], [s____00053[2]], -6, BOOL____00103) :: defines_var(BOOL____00103);\n\
constraint int_lin_le_reif([-1], [s____00053[2]], -5, BOOL____00096) :: defines_var(BOOL____00096);\n\
constraint int_lin_le_reif([-1], [s____00053[2]], -4, BOOL____00089) :: defines_var(BOOL____00089);\n\
constraint int_lin_le_reif([-1], [s____00053[2]], -3, BOOL____00082) :: defines_var(BOOL____00082);\n\
constraint int_lin_le_reif([-1], [s____00053[2]], -2, BOOL____00075) :: defines_var(BOOL____00075);\n\
constraint int_lin_le_reif([-1], [s____00110[1]], -3, a[97]);\n\
constraint int_lin_le_reif([-1], [s____00110[1]], -2, BOOL____00120) :: defines_var(BOOL____00120);\n\
constraint int_lin_le_reif([-1], [s____00123[1]], -5, a[96]);\n\
constraint int_lin_le_reif([-1], [s____00123[1]], -4, BOOL____00137) :: defines_var(BOOL____00137);\n\
constraint int_lin_le_reif([-1], [s____00123[1]], -3, BOOL____00134) :: defines_var(BOOL____00134);\n\
constraint int_lin_le_reif([-1], [s____00123[1]], -2, BOOL____00131) :: defines_var(BOOL____00131);\n\
constraint int_lin_le_reif([-1], [s____00140[1]], -5, a[95]);\n\
constraint int_lin_le_reif([-1], [s____00140[1]], -4, BOOL____00154) :: defines_var(BOOL____00154);\n\
constraint int_lin_le_reif([-1], [s____00140[1]], -3, BOOL____00151) :: defines_var(BOOL____00151);\n\
constraint int_lin_le_reif([-1], [s____00140[1]], -2, BOOL____00148) :: defines_var(BOOL____00148);\n\
constraint int_lin_le_reif([-1], [s____00157[1]], -6, a[94]);\n\
constraint int_lin_le_reif([-1], [s____00157[1]], -5, BOOL____00173) :: defines_var(BOOL____00173);\n\
constraint int_lin_le_reif([-1], [s____00157[1]], -4, BOOL____00170) :: defines_var(BOOL____00170);\n\
constraint int_lin_le_reif([-1], [s____00157[1]], -3, BOOL____00167) :: defines_var(BOOL____00167);\n\
constraint int_lin_le_reif([-1], [s____00157[1]], -2, BOOL____00164) :: defines_var(BOOL____00164);\n\
constraint int_lin_le_reif([-1], [s____00176[1]], -7, a[93]);\n\
constraint int_lin_le_reif([-1], [s____00176[1]], -6, BOOL____00194) :: defines_var(BOOL____00194);\n\
constraint int_lin_le_reif([-1], [s____00176[1]], -5, BOOL____00191) :: defines_var(BOOL____00191);\n\
constraint int_lin_le_reif([-1], [s____00176[1]], -4, BOOL____00188) :: defines_var(BOOL____00188);\n\
constraint int_lin_le_reif([-1], [s____00176[1]], -3, BOOL____00185) :: defines_var(BOOL____00185);\n\
constraint int_lin_le_reif([-1], [s____00176[1]], -2, BOOL____00182) :: defines_var(BOOL____00182);\n\
constraint int_lin_le_reif([-1], [s____00197[1]], -8, a[92]);\n\
constraint int_lin_le_reif([-1], [s____00197[1]], -7, BOOL____00217) :: defines_var(BOOL____00217);\n\
constraint int_lin_le_reif([-1], [s____00197[1]], -6, BOOL____00214) :: defines_var(BOOL____00214);\n\
constraint int_lin_le_reif([-1], [s____00197[1]], -5, BOOL____00211) :: defines_var(BOOL____00211);\n\
constraint int_lin_le_reif([-1], [s____00197[1]], -4, BOOL____00208) :: defines_var(BOOL____00208);\n\
constraint int_lin_le_reif([-1], [s____00197[1]], -3, BOOL____00205) :: defines_var(BOOL____00205);\n\
constraint int_lin_le_reif([-1], [s____00197[1]], -2, BOOL____00202) :: defines_var(BOOL____00202);\n\
constraint int_lin_le_reif([-1], [s____00220[1]], -6, a[91]);\n\
constraint int_lin_le_reif([-1], [s____00220[1]], -5, BOOL____00236) :: defines_var(BOOL____00236);\n\
constraint int_lin_le_reif([-1], [s____00220[1]], -4, BOOL____00233) :: defines_var(BOOL____00233);\n\
constraint int_lin_le_reif([-1], [s____00220[1]], -3, BOOL____00230) :: defines_var(BOOL____00230);\n\
constraint int_lin_le_reif([-1], [s____00220[1]], -2, BOOL____00227) :: defines_var(BOOL____00227);\n\
constraint int_lin_le_reif([-1], [s____00239[1]], -9, a[100]);\n\
constraint int_lin_le_reif([-1], [s____00239[1]], -8, BOOL____00261) :: defines_var(BOOL____00261);\n\
constraint int_lin_le_reif([-1], [s____00239[1]], -7, BOOL____00258) :: defines_var(BOOL____00258);\n\
constraint int_lin_le_reif([-1], [s____00239[1]], -6, BOOL____00255) :: defines_var(BOOL____00255);\n\
constraint int_lin_le_reif([-1], [s____00239[1]], -5, BOOL____00252) :: defines_var(BOOL____00252);\n\
constraint int_lin_le_reif([-1], [s____00239[1]], -4, BOOL____00249) :: defines_var(BOOL____00249);\n\
constraint int_lin_le_reif([-1], [s____00239[1]], -3, BOOL____00246) :: defines_var(BOOL____00246);\n\
constraint int_lin_le_reif([-1], [s____00239[1]], -2, BOOL____00243) :: defines_var(BOOL____00243);\n\
constraint int_lin_le_reif([-1], [s____00264[1]], -7, a[90]);\n\
constraint int_lin_le_reif([-1], [s____00264[1]], -6, BOOL____00282) :: defines_var(BOOL____00282);\n\
constraint int_lin_le_reif([-1], [s____00264[1]], -5, BOOL____00279) :: defines_var(BOOL____00279);\n\
constraint int_lin_le_reif([-1], [s____00264[1]], -4, BOOL____00276) :: defines_var(BOOL____00276);\n\
constraint int_lin_le_reif([-1], [s____00264[1]], -3, BOOL____00273) :: defines_var(BOOL____00273);\n\
constraint int_lin_le_reif([-1], [s____00264[1]], -2, BOOL____00270) :: defines_var(BOOL____00270);\n\
constraint int_lin_le_reif([-1], [s____00285[1]], -5, a[80]);\n\
constraint int_lin_le_reif([-1], [s____00285[1]], -4, BOOL____00299) :: defines_var(BOOL____00299);\n\
constraint int_lin_le_reif([-1], [s____00285[1]], -3, BOOL____00296) :: defines_var(BOOL____00296);\n\
constraint int_lin_le_reif([-1], [s____00285[1]], -2, BOOL____00293) :: defines_var(BOOL____00293);\n\
constraint int_lin_le_reif([-1], [s____00302[1]], -4, a[70]);\n\
constraint int_lin_le_reif([-1], [s____00302[1]], -3, BOOL____00314) :: defines_var(BOOL____00314);\n\
constraint int_lin_le_reif([-1], [s____00302[1]], -2, BOOL____00311) :: defines_var(BOOL____00311);\n\
constraint int_lin_le_reif([-1], [s____00317[1]], -3, a[60]);\n\
constraint int_lin_le_reif([-1], [s____00317[1]], -2, BOOL____00327) :: defines_var(BOOL____00327);\n\
constraint int_lin_le_reif([-1], [s____00330[1]], -10, BOOL____00384) :: defines_var(BOOL____00384);\n\
constraint int_lin_le_reif([-1], [s____00330[1]], -9, BOOL____00378) :: defines_var(BOOL____00378);\n\
constraint int_lin_le_reif([-1], [s____00330[1]], -8, BOOL____00371) :: defines_var(BOOL____00371);\n\
constraint int_lin_le_reif([-1], [s____00330[1]], -7, BOOL____00364) :: defines_var(BOOL____00364);\n\
constraint int_lin_le_reif([-1], [s____00330[1]], -6, BOOL____00357) :: defines_var(BOOL____00357);\n\
constraint int_lin_le_reif([-1], [s____00330[1]], -5, BOOL____00350) :: defines_var(BOOL____00350);\n\
constraint int_lin_le_reif([-1], [s____00330[1]], -4, BOOL____00345) :: defines_var(BOOL____00345);\n\
constraint int_lin_le_reif([-1], [s____00330[1]], -3, BOOL____00340) :: defines_var(BOOL____00340);\n\
constraint int_lin_le_reif([-1], [s____00330[1]], -2, BOOL____00335) :: defines_var(BOOL____00335);\n\
constraint int_lin_le_reif([-1], [s____00330[2]], -7, BOOL____00385) :: defines_var(BOOL____00385);\n\
constraint int_lin_le_reif([-1], [s____00330[2]], -6, BOOL____00380) :: defines_var(BOOL____00380);\n\
constraint int_lin_le_reif([-1], [s____00330[2]], -5, BOOL____00373) :: defines_var(BOOL____00373);\n\
constraint int_lin_le_reif([-1], [s____00330[2]], -4, BOOL____00366) :: defines_var(BOOL____00366);\n\
constraint int_lin_le_reif([-1], [s____00330[2]], -3, BOOL____00359) :: defines_var(BOOL____00359);\n\
constraint int_lin_le_reif([-1], [s____00330[2]], -2, BOOL____00352) :: defines_var(BOOL____00352);\n\
constraint int_lin_le_reif([-1], [s____00387[1]], -10, BOOL____00443) :: defines_var(BOOL____00443);\n\
constraint int_lin_le_reif([-1], [s____00387[1]], -9, BOOL____00437) :: defines_var(BOOL____00437);\n\
constraint int_lin_le_reif([-1], [s____00387[1]], -8, BOOL____00430) :: defines_var(BOOL____00430);\n\
constraint int_lin_le_reif([-1], [s____00387[1]], -7, BOOL____00423) :: defines_var(BOOL____00423);\n\
constraint int_lin_le_reif([-1], [s____00387[1]], -6, BOOL____00416) :: defines_var(BOOL____00416);\n\
constraint int_lin_le_reif([-1], [s____00387[1]], -5, BOOL____00409) :: defines_var(BOOL____00409);\n\
constraint int_lin_le_reif([-1], [s____00387[1]], -4, BOOL____00402) :: defines_var(BOOL____00402);\n\
constraint int_lin_le_reif([-1], [s____00387[1]], -3, BOOL____00397) :: defines_var(BOOL____00397);\n\
constraint int_lin_le_reif([-1], [s____00387[1]], -2, BOOL____00392) :: defines_var(BOOL____00392);\n\
constraint int_lin_le_reif([-1], [s____00387[2]], -8, BOOL____00444) :: defines_var(BOOL____00444);\n\
constraint int_lin_le_reif([-1], [s____00387[2]], -7, BOOL____00439) :: defines_var(BOOL____00439);\n\
constraint int_lin_le_reif([-1], [s____00387[2]], -6, BOOL____00432) :: defines_var(BOOL____00432);\n\
constraint int_lin_le_reif([-1], [s____00387[2]], -5, BOOL____00425) :: defines_var(BOOL____00425);\n\
constraint int_lin_le_reif([-1], [s____00387[2]], -4, BOOL____00418) :: defines_var(BOOL____00418);\n\
constraint int_lin_le_reif([-1], [s____00387[2]], -3, BOOL____00411) :: defines_var(BOOL____00411);\n\
constraint int_lin_le_reif([-1], [s____00387[2]], -2, BOOL____00404) :: defines_var(BOOL____00404);\n\
constraint int_lin_le_reif([-1], [s____00446[1]], -10, BOOL____00500) :: defines_var(BOOL____00500);\n\
constraint int_lin_le_reif([-1], [s____00446[1]], -9, BOOL____00494) :: defines_var(BOOL____00494);\n\
constraint int_lin_le_reif([-1], [s____00446[1]], -8, BOOL____00487) :: defines_var(BOOL____00487);\n\
constraint int_lin_le_reif([-1], [s____00446[1]], -7, BOOL____00480) :: defines_var(BOOL____00480);\n\
constraint int_lin_le_reif([-1], [s____00446[1]], -6, BOOL____00473) :: defines_var(BOOL____00473);\n\
constraint int_lin_le_reif([-1], [s____00446[1]], -5, BOOL____00466) :: defines_var(BOOL____00466);\n\
constraint int_lin_le_reif([-1], [s____00446[1]], -4, BOOL____00461) :: defines_var(BOOL____00461);\n\
constraint int_lin_le_reif([-1], [s____00446[1]], -3, BOOL____00456) :: defines_var(BOOL____00456);\n\
constraint int_lin_le_reif([-1], [s____00446[1]], -2, BOOL____00451) :: defines_var(BOOL____00451);\n\
constraint int_lin_le_reif([-1], [s____00446[2]], -7, BOOL____00501) :: defines_var(BOOL____00501);\n\
constraint int_lin_le_reif([-1], [s____00446[2]], -6, BOOL____00496) :: defines_var(BOOL____00496);\n\
constraint int_lin_le_reif([-1], [s____00446[2]], -5, BOOL____00489) :: defines_var(BOOL____00489);\n\
constraint int_lin_le_reif([-1], [s____00446[2]], -4, BOOL____00482) :: defines_var(BOOL____00482);\n\
constraint int_lin_le_reif([-1], [s____00446[2]], -3, BOOL____00475) :: defines_var(BOOL____00475);\n\
constraint int_lin_le_reif([-1], [s____00446[2]], -2, BOOL____00468) :: defines_var(BOOL____00468);\n\
constraint int_lin_le_reif([-1], [s____00503[1]], -10, BOOL____00563) :: defines_var(BOOL____00563);\n\
constraint int_lin_le_reif([-1], [s____00503[1]], -9, BOOL____00557) :: defines_var(BOOL____00557);\n\
constraint int_lin_le_reif([-1], [s____00503[1]], -8, BOOL____00550) :: defines_var(BOOL____00550);\n\
constraint int_lin_le_reif([-1], [s____00503[1]], -7, BOOL____00543) :: defines_var(BOOL____00543);\n\
constraint int_lin_le_reif([-1], [s____00503[1]], -6, BOOL____00536) :: defines_var(BOOL____00536);\n\
constraint int_lin_le_reif([-1], [s____00503[1]], -5, BOOL____00529) :: defines_var(BOOL____00529);\n\
constraint int_lin_le_reif([-1], [s____00503[1]], -4, BOOL____00522) :: defines_var(BOOL____00522);\n\
constraint int_lin_le_reif([-1], [s____00503[1]], -3, BOOL____00515) :: defines_var(BOOL____00515);\n\
constraint int_lin_le_reif([-1], [s____00503[1]], -2, BOOL____00508) :: defines_var(BOOL____00508);\n\
constraint int_lin_le_reif([-1], [s____00503[2]], -10, BOOL____00564) :: defines_var(BOOL____00564);\n\
constraint int_lin_le_reif([-1], [s____00503[2]], -9, BOOL____00559) :: defines_var(BOOL____00559);\n\
constraint int_lin_le_reif([-1], [s____00503[2]], -8, BOOL____00552) :: defines_var(BOOL____00552);\n\
constraint int_lin_le_reif([-1], [s____00503[2]], -7, BOOL____00545) :: defines_var(BOOL____00545);\n\
constraint int_lin_le_reif([-1], [s____00503[2]], -6, BOOL____00538) :: defines_var(BOOL____00538);\n\
constraint int_lin_le_reif([-1], [s____00503[2]], -5, BOOL____00531) :: defines_var(BOOL____00531);\n\
constraint int_lin_le_reif([-1], [s____00503[2]], -4, BOOL____00524) :: defines_var(BOOL____00524);\n\
constraint int_lin_le_reif([-1], [s____00503[2]], -3, BOOL____00517) :: defines_var(BOOL____00517);\n\
constraint int_lin_le_reif([-1], [s____00503[2]], -2, BOOL____00510) :: defines_var(BOOL____00510);\n\
constraint int_lin_le_reif([-1], [s____00566[1]], -9, a[10]);\n\
constraint int_lin_le_reif([-1], [s____00566[1]], -8, BOOL____00588) :: defines_var(BOOL____00588);\n\
constraint int_lin_le_reif([-1], [s____00566[1]], -7, BOOL____00585) :: defines_var(BOOL____00585);\n\
constraint int_lin_le_reif([-1], [s____00566[1]], -6, BOOL____00582) :: defines_var(BOOL____00582);\n\
constraint int_lin_le_reif([-1], [s____00566[1]], -5, BOOL____00579) :: defines_var(BOOL____00579);\n\
constraint int_lin_le_reif([-1], [s____00566[1]], -4, BOOL____00576) :: defines_var(BOOL____00576);\n\
constraint int_lin_le_reif([-1], [s____00566[1]], -3, BOOL____00573) :: defines_var(BOOL____00573);\n\
constraint int_lin_le_reif([-1], [s____00566[1]], -2, BOOL____00570) :: defines_var(BOOL____00570);\n\
solve satisfy;\n\
", "a = array2d(1..10, 1..10, [false, false, false, false, false, false, true, true, false, false, false, false, false, false, false, false, true, false, true, false, true, false, false, false, false, false, true, true, true, true, true, false, false, false, false, true, true, true, false, false, true, false, false, false, true, true, true, true, false, false, true, true, true, true, true, true, true, true, false, false, true, true, true, true, true, true, true, false, false, false, false, true, true, true, true, true, true, false, false, false, false, false, true, true, true, true, false, false, false, false, false, false, false, true, true, false, false, false, false, false]);\n\
----------\n\
");
      }
    };

    Create c;
  }

}}

// STATISTICS: test-flatzinc
