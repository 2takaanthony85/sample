//
//  CWrapper.h
//  CWrapper
//
//  Created by atd on 2018/05/24.
//  Copyright © 2018年 atd. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "writeHashLib.h"

@interface CWrapper : NSObject

+(int)call_JACIC_WriteHashValue:(NSString*) sourceFile destFile:(NSString*) destFile;

@end
