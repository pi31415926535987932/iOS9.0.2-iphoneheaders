/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSTabBar.h>
@class SKUIJSTabBarItem, NSArray;


@protocol SKUIJSTabBar <JSExport>
@property (nonatomic,retain) SKUIJSTabBarItem * selectedTab; 
@property (nonatomic,readonly) NSArray * tabs; 
@property (nonatomic,readonly) SKUIJSTabBarItem * transientTab; 
@required
-(SKUIJSTabBarItem *)transientTab;
-(NSArray *)tabs;
-(SKUIJSTabBarItem *)selectedTab;
-(void)setSelectedTab:(id)arg1;

@end


@class SKUIJSTabBarItem, NSArray, SKUIApplicationController, NSMutableArray;

@interface SKUIJSTabBar : IKJSObject <SKUIJSTabBar> {

	SKUIApplicationController* _applicationController;
	NSMutableArray* _tabBarItems;
	SKUIJSTabBarItem* _transientTabBarItem;

}

@property (nonatomic,retain) SKUIJSTabBarItem * selectedTab; 
@property (nonatomic,readonly) NSArray * tabs; 
@property (nonatomic,readonly) SKUIJSTabBarItem * transientTab; 
-(void)sendOnUpdate;
-(id)initWithAppContext:(id)arg1 controller:(id)arg2 ;
-(SKUIJSTabBarItem *)transientTab;
-(NSArray *)tabs;
-(void)sendOnNeedsContentForTabBarItem:(id)arg1 ;
-(void)_reloadTabBarItemsWithPreludeMainThreadWork:(/*^block*/id)arg1 ;
-(id)_selectedTabBarItemForIndex:(int)arg1 ;
-(SKUIJSTabBarItem *)selectedTab;
-(void)setSelectedTab:(SKUIJSTabBarItem *)arg1 ;
@end

