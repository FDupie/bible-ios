/*
 * This file is part of the Raamattu project,
 * (C)Copyright 2012-2013 Matias Muhonen <mmu@iki.fi>
 * See the file ''LICENSE'' for using the code.
 */

#import <Foundation/Foundation.h>

@interface MAChapterIndex : NSObject {
    NSUInteger _numberOfChapters;
}

@property (nonatomic,readonly) NSUInteger chapterCount;

- (id)initWithNumberOfChapters:(NSUInteger)numberOfChapters;

@end