//
//  ToDoItem.h
//  TodoList
//
//  Created by apple on 15/4/17.
//  Copyright (c) 2015年 thinker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *name;
@property (readonly) NSDate *date;
@property BOOL isCompleted;

@end
