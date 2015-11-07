/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIViewController.h>
#import <Podcasts/MTActionControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Podcasts/MTReachabilityObserver.h>
#import <Podcasts/MTEpisodeCellDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol MTSearchDisplayControllerDelegate;
@class UILabel, UIView, NSArray, MTTextQuery, UITableView, UISearchBar, UIViewController, NSString, MTKeyboardStateObserver;

@interface MTSearchDisplayController : UIViewController <MTActionControllerDelegate, UITableViewDelegate, UITableViewDataSource, MTReachabilityObserver, MTEpisodeCellDelegate, UISearchBarDelegate> {

	struct {
		unsigned delegateWillBeginSearch : 1;
		unsigned delegateWillEndSearch : 1;
		unsigned delegateDidSelectPodcast : 1;
		unsigned delegateDidSelectEpisode : 1;
		unsigned delegateDidRecognize : 1;
	}  _delegateFlags;
	UILabel* _noResults;
	CGSize _cachedFixedRowSize;
	char _active;
	char _visible;
	id<MTSearchDisplayControllerDelegate> _delegate;
	UIView* _dismissView;
	NSArray* _podcastResults;
	NSArray* _episodeResults;
	/*^block*/id _searchBeginBlock;
	/*^block*/id _searchEndBlock;
	MTTextQuery* _query;
	UITableView* _tableView;
	UISearchBar* _searchBar;
	UIViewController* _contentsController;
	NSString* _expandedEpisodeUuid;
	unsigned _cellStyle;
	MTKeyboardStateObserver* _keyboardStateObserver;
	CGSize _episodeCellSize;
	UIEdgeInsets _containerEdgeInsets;

}

@property (nonatomic,copy) id searchBeginBlock;                                            //@synthesize searchBeginBlock=_searchBeginBlock - In the implementation block
@property (nonatomic,copy) id searchEndBlock;                                              //@synthesize searchEndBlock=_searchEndBlock - In the implementation block
@property (assign,nonatomic) id<MTSearchDisplayControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                      //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                      //@synthesize tableView=_tableView - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                                  //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) UIEdgeInsets containerEdgeInsets;                             //@synthesize containerEdgeInsets=_containerEdgeInsets - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * contentsController;                 //@synthesize contentsController=_contentsController - In the implementation block
@property (nonatomic,retain) NSArray * podcastResults;                                     //@synthesize podcastResults=_podcastResults - In the implementation block
@property (nonatomic,retain) NSArray * episodeResults;                                     //@synthesize episodeResults=_episodeResults - In the implementation block
@property (nonatomic,retain) MTTextQuery * query;                                          //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) UIView * dismissView;                                         //@synthesize dismissView=_dismissView - In the implementation block
@property (nonatomic,retain) NSString * expandedEpisodeUuid;                               //@synthesize expandedEpisodeUuid=_expandedEpisodeUuid - In the implementation block
@property (assign,getter=isVisible,nonatomic) char visible;                                //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) CGSize episodeCellSize;                                       //@synthesize episodeCellSize=_episodeCellSize - In the implementation block
@property (assign,nonatomic) unsigned cellStyle;                                           //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,retain) MTKeyboardStateObserver * keyboardStateObserver;              //@synthesize keyboardStateObserver=_keyboardStateObserver - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissActionSheetsAndPopovers;
-(void)updateActionSheetsAndPopovers;
-(NSString *)expandedEpisodeUuid;
-(id)indexPathForEpisodeUuid:(id)arg1 ;
-(void)setExpandedEpisodeUuid:(NSString *)arg1 ;
-(void)toggleExpansionForEpisodeUuid:(id)arg1 ;
-(void)playEpisodeAtIndexPath:(id)arg1 ;
-(void)reachabilityChangedFrom:(char)arg1 to:(char)arg2 ;
-(void)didPerformActionInSheet:(id)arg1 ;
-(void)cell:(id)arg1 moreButtonTapped:(id)arg2 ;
-(void)cellDidChangeSize:(id)arg1 ;
-(void)updateEstimatedRowHeight;
-(void)dismissSearch:(id)arg1 ;
-(void)setKeyboardStateObserver:(MTKeyboardStateObserver *)arg1 ;
-(MTKeyboardStateObserver *)keyboardStateObserver;
-(void)configureCell:(id)arg1 indexPath:(id)arg2 ;
-(NSArray *)podcastResults;
-(NSArray *)episodeResults;
-(void)selectedEpisodeAtIndexPath:(id)arg1 ;
-(void)performSearch:(id)arg1 ;
-(void)setPodcastResults:(NSArray *)arg1 ;
-(void)setEpisodeResults:(NSArray *)arg1 ;
-(id)searchBeginBlock;
-(void)setSearchBeginBlock:(id)arg1 ;
-(id)searchEndBlock;
-(void)setSearchEndBlock:(id)arg1 ;
-(void)setContentsController:(UIViewController *)arg1 ;
-(UIEdgeInsets)containerEdgeInsets;
-(void)setContainerEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGSize)episodeCellSize;
-(void)setEpisodeCellSize:(CGSize)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setDelegate:(id<MTSearchDisplayControllerDelegate>)arg1 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<MTSearchDisplayControllerDelegate>)delegate;
-(char)isActive;
-(MTTextQuery *)query;
-(void)viewWillLayoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setQuery:(MTTextQuery *)arg1 ;
-(void)setVisible:(char)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(UISearchBar *)searchBar;
-(void)setActive:(char)arg1 ;
-(char)isVisible;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(char)searchBarShouldBeginEditing:(id)arg1 ;
-(char)searchBarShouldEndEditing:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)setDismissView:(UIView *)arg1 ;
-(UIView *)dismissView;
-(unsigned)cellStyle;
-(void)setCellStyle:(unsigned)arg1 ;
-(UIViewController *)contentsController;
@end
