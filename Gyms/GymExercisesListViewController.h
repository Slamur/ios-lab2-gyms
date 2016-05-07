//
//  MasterViewController.h
//  Gyms
//
//  Created by Admin on 14.04.16.
//  Copyright © 2016 SSAU. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class DetailViewController;

@interface GymExercisesListViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

