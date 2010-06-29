//
//  CommitteeDetailViewController.h
//  TexLege
//
//  Created by Gregory Combs on 6/29/10.
//  Copyright 2010 Gregory S. Combs. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CommitteeObj;

@interface CommitteeDetailViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {
	CommitteeObj		*committee;
}

@property (nonatomic, retain) CommitteeObj *committee;


@end