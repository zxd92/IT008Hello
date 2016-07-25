//
//  People+CoreDataProperties.h
//  CustomCoreData
//
//  Created by Mac on 16/7/23.
//  Copyright © 2016年 zxd. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "People.h"

NS_ASSUME_NONNULL_BEGIN

@interface People (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *age;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSSet<Car *> *car;

@end

@interface People (CoreDataGeneratedAccessors)

- (void)addCarObject:(Car *)value;
- (void)removeCarObject:(Car *)value;
- (void)addCar:(NSSet<Car *> *)values;
- (void)removeCar:(NSSet<Car *> *)values;

@end

NS_ASSUME_NONNULL_END
