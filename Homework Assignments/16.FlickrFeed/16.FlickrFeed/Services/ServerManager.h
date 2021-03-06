//
//  ServerManager.h
//  16.FlickrFeed
//
//  Created by P. Mihaylov on 5/27/15.
//  Copyright (c) 2015 Mihaylov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppDelegate.h"

@interface ServerManager : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *masterContext;
@property (readonly, strong, nonatomic) NSManagedObjectContext *mainContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (ServerManager *)sharedInstance;
- (void)saveContext;

@end
