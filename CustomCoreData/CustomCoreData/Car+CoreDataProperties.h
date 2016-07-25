//
//  Car+CoreDataProperties.h
//  CustomCoreData
//
//  Created by Mac on 16/7/23.
//  Copyright © 2016年 zxd. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Car.h"

NS_ASSUME_NONNULL_BEGIN

@interface Car (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) People *people;

@end

NS_ASSUME_NONNULL_END
