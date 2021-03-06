#ifndef ZXING_ALIGNMENT_PATTERN_FINDER_H
#define ZXING_ALIGNMENT_PATTERN_FINDER_H

/*
 *  AlignmentPatternFinder.h
 *  zxing
 *
 *  Copyright 2010 ZXing authors All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "AlignmentPattern.h"
#include <QSharedPointer>
#include <zxing/common/BitMatrix.h>
#include <zxing/ResultPointCallback.h>
#include <vector>

namespace zxing {
namespace qrcode {

class AlignmentPatternFinder  {
private:
  static int CENTER_QUORUM;
  static int MIN_SKIP;
  static int MAX_MODULES;

  QSharedPointer<BitMatrix> image_;
  std::vector<QSharedPointer<AlignmentPattern>> *possibleCenters_;
  int startX_;
  int startY_;
  int width_;
  int height_;
  float moduleSize_;

  static float centerFromEnd(std::vector<int> &stateCount, int end);
  bool foundPatternCross(std::vector<int> &stateCount);

  float crossCheckVertical(int startI, int centerJ, int maxCount, int originalStateCountTotal);

  QSharedPointer<AlignmentPattern> handlePossibleCenter(std::vector<int> &stateCount, int i, int j);

public:
  AlignmentPatternFinder(QSharedPointer<BitMatrix> image, int startX, int startY, int width, int height,
                         float moduleSize, QSharedPointer<ResultPointCallback>const& callback);
  ~AlignmentPatternFinder();
  QSharedPointer<AlignmentPattern> find();
  
private:
  AlignmentPatternFinder(const AlignmentPatternFinder&);
  AlignmentPatternFinder& operator =(const AlignmentPatternFinder&);
  
  QSharedPointer<ResultPointCallback> callback_;
};
}
}

#endif // ZXING_ALIGNMENT_PATTERN_FINDER_H
