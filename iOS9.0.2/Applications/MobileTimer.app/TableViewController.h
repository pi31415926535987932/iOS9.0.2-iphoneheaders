/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <MobileTimer/MTAddItemController.h>

@class UIView, UITableView, UIBarButtonItem, _UIContentUnavailableView, NSString;

@interface TableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MTAddItemController> {

	UIView* _backgroundView;
	UITableView* _tableView;
	UIBarButtonItem* _addButton;
	_UIContentUnavailableView* _noItemsView;

}

@property (nonatomic,readonly) UITableView * tableView;                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * addButton;              //@synthesize addButton=_addButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)saveScrollPoint;
-(void)showAddView;
-(void)dismissAddViewController:(id)arg1 ;
-(id)noItemsText;
-(id)addViewController;
-(float)itemsTableRowHeight;
-(void)_numberOfItemsDidChangeAnimated:(char)arg1 ;
-(void)_layoutNoItemsLabel;
-(UIBarButtonItem *)addButton;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(int)numberOfItems;
-(void)reloadState;
@end

