/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class BarShadowView, UITableView;

@interface BrowseSplitView : UIView {

	BarShadowView* _topShadow;
	BarShadowView* _sidebarShadow;
	char _displaysAsSidebar;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) char displaysAsSidebar;               //@synthesize displaysAsSidebar=_displaysAsSidebar - In the implementation block
-(char)displaysAsSidebar;
-(void)setDisplaysAsSidebar:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
@end

