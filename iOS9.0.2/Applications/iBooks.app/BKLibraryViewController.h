/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKViewController.h>
#import <iBooks/BKTransitioningViewControllerDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <iBooks/BKWallpaperStyling.h>
#import <iBooks/BKLibraryBooksViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <iBooks/BKCollectionsListViewDelegate.h>
#import <iBooks/BKLibraryBookCollectible.h>
#import <UIKit/UIToolbarDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <iBooks/IMConfigurationHosting.h>

@class NSArray, BKLibraryManagedObjectContext, IMToolbar, UIView, IMSearchBar, UIBarButtonItem, _UIBackdropView, BKBlurryWallpaperView, IMPassthroughView, NSDictionary, UIButton, UISegmentedControl, NSMutableSet, BKLibraryAlertController, NSString, NSMapTable, BEHairlineDividerView, BKTransitioningViewController, BKLibraryConfiguration, BKLibraryBooksViewController, IMThemeBookshelf;

@interface BKLibraryViewController : BKViewController <BKTransitioningViewControllerDelegate, MCProfileConnectionObserver, BKWallpaperStyling, BKLibraryBooksViewControllerDelegate, UIPopoverPresentationControllerDelegate, BKCollectionsListViewDelegate, BKLibraryBookCollectible, UIToolbarDelegate, UISearchBarDelegate, IMConfigurationHosting> {

	char _hidingSeriesItems;
	char _isStoreAllowed;
	char _isObservingLibrary;
	char _isSearching;
	char _searchBarPushedUp;
	char _ignoreToolbarItemUpdates;
	char _snapshotTaken;
	char _processingTraitCollection;
	char _editLoadingIndicatorDisabled;
	BKLibraryManagedObjectContext* _moc;
	IMToolbar* _toolbar;
	UIView* _contentView;
	UIView* _embeddedHeaderContainerView;
	IMSearchBar* _embeddedHeaderSearchField;
	UIBarButtonItem* _embeddedHeaderSearchBarItem;
	IMToolbar* _embeddedHeaderToolbar;
	NSArray* _embeddedHeaderToolbarItems;
	UIBarButtonItem* _embeddedHeaderViewTypeBarButtonItem;
	_UIBackdropView* _topBackdropView;
	BKBlurryWallpaperView* _wallpaperView;
	IMPassthroughView* _nightDarkenView;
	NSDictionary* _seriesPrices;
	UIBarButtonItem* _collectionsBarButtonItemCompact;
	UIBarButtonItem* _appTitleBarButtonItem;
	UIBarButtonItem* _moveBarButtonItem;
	UIBarButtonItem* _deleteBarButtonItem;
	UIBarButtonItem* _viewTypeToggleBarButtonItem;
	UIBarButtonItem* _selectAllBarButtonItem;
	UIBarButtonItem* _deselectAllBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	UIBarButtonItem* _backBarButtonItem;
	UIBarButtonItem* _editBarButtonItem;
	UIBarButtonItem* _embeddedToolbarButtonItem;
	UIButton* _collectionsBarButton;
	UIButton* _appTitleBarButton;
	UISegmentedControl* _viewTypeSwitch;
	UISegmentedControl* _sortSegmentedControl;
	UISegmentedControl* _seriesSegmentedControl;
	UIBarButtonItem* _loadingBarButtonItem;
	NSMutableSet* _bookEditingSet;
	BKLibraryAlertController* _deleteAlertController;
	int _currentPopoverIdentifier;
	unsigned _countOfBooksSelected;
	UIView* _embeddedToolbarItemsView;
	NSString* _seriesID;
	NSMapTable* _dataSourceToViewControllerMapTable;
	BEHairlineDividerView* _toolbarSeparatorLineView;
	float _topBackdropEmbeddedHeaderAdditionalHeight;
	float _bottomOfToolbar;
	BKTransitioningViewController* _transitionViewController;
	BKLibraryConfiguration* _configuration;

}

@property (nonatomic,retain) BKLibraryManagedObjectContext * moc;                                                  //@synthesize moc=_moc - In the implementation block
@property (nonatomic,retain) IMToolbar * toolbar;                                                                  //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * embeddedHeaderContainerView;                                                 //@synthesize embeddedHeaderContainerView=_embeddedHeaderContainerView - In the implementation block
@property (nonatomic,readonly) UIView * embeddedHeaderContentView; 
@property (nonatomic,retain) IMSearchBar * embeddedHeaderSearchField;                                              //@synthesize embeddedHeaderSearchField=_embeddedHeaderSearchField - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * embeddedHeaderSearchBarItem;                                        //@synthesize embeddedHeaderSearchBarItem=_embeddedHeaderSearchBarItem - In the implementation block
@property (nonatomic,retain) IMToolbar * embeddedHeaderToolbar;                                                    //@synthesize embeddedHeaderToolbar=_embeddedHeaderToolbar - In the implementation block
@property (nonatomic,retain) NSArray * embeddedHeaderToolbarItems;                                                 //@synthesize embeddedHeaderToolbarItems=_embeddedHeaderToolbarItems - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * embeddedHeaderViewTypeBarButtonItem;                                //@synthesize embeddedHeaderViewTypeBarButtonItem=_embeddedHeaderViewTypeBarButtonItem - In the implementation block
@property (nonatomic,retain) _UIBackdropView * topBackdropView;                                                    //@synthesize topBackdropView=_topBackdropView - In the implementation block
@property (assign,nonatomic) BKBlurryWallpaperView * wallpaperView;                                                //@synthesize wallpaperView=_wallpaperView - In the implementation block
@property (assign,nonatomic,__weak) IMPassthroughView * nightDarkenView;                                           //@synthesize nightDarkenView=_nightDarkenView - In the implementation block
@property (nonatomic,readonly) BKLibraryBooksViewController * topViewController; 
@property (nonatomic,retain) IMThemeBookshelf * theme; 
@property (assign,nonatomic) char hidingSeriesItems;                                                               //@synthesize hidingSeriesItems=_hidingSeriesItems - In the implementation block
@property (nonatomic,retain) NSDictionary * seriesPrices;                                                          //@synthesize seriesPrices=_seriesPrices - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * collectionsBarButtonItemCompact;                                    //@synthesize collectionsBarButtonItemCompact=_collectionsBarButtonItemCompact - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * appTitleBarButtonItem;                                              //@synthesize appTitleBarButtonItem=_appTitleBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * moveBarButtonItem;                                                  //@synthesize moveBarButtonItem=_moveBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * deleteBarButtonItem;                                                //@synthesize deleteBarButtonItem=_deleteBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * viewTypeToggleBarButtonItem;                                        //@synthesize viewTypeToggleBarButtonItem=_viewTypeToggleBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * selectAllBarButtonItem;                                             //@synthesize selectAllBarButtonItem=_selectAllBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * deselectAllBarButtonItem;                                           //@synthesize deselectAllBarButtonItem=_deselectAllBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneBarButtonItem;                                                  //@synthesize doneBarButtonItem=_doneBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backBarButtonItem;                                                  //@synthesize backBarButtonItem=_backBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * editBarButtonItem;                                                  //@synthesize editBarButtonItem=_editBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * embeddedToolbarButtonItem;                                          //@synthesize embeddedToolbarButtonItem=_embeddedToolbarButtonItem - In the implementation block
@property (assign,nonatomic) char isStoreAllowed;                                                                  //@synthesize isStoreAllowed=_isStoreAllowed - In the implementation block
@property (nonatomic,retain) UIButton * collectionsBarButton;                                                      //@synthesize collectionsBarButton=_collectionsBarButton - In the implementation block
@property (nonatomic,retain) UIButton * appTitleBarButton;                                                         //@synthesize appTitleBarButton=_appTitleBarButton - In the implementation block
@property (nonatomic,retain) UISegmentedControl * viewTypeSwitch;                                                  //@synthesize viewTypeSwitch=_viewTypeSwitch - In the implementation block
@property (nonatomic,retain) UISegmentedControl * sortSegmentedControl;                                            //@synthesize sortSegmentedControl=_sortSegmentedControl - In the implementation block
@property (nonatomic,retain) UISegmentedControl * seriesSegmentedControl;                                          //@synthesize seriesSegmentedControl=_seriesSegmentedControl - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * loadingBarButtonItem;                                               //@synthesize loadingBarButtonItem=_loadingBarButtonItem - In the implementation block
@property (nonatomic,retain) NSMutableSet * bookEditingSet;                                                        //@synthesize bookEditingSet=_bookEditingSet - In the implementation block
@property (nonatomic,retain) BKLibraryAlertController * deleteAlertController;                                     //@synthesize deleteAlertController=_deleteAlertController - In the implementation block
@property (assign,nonatomic) char isObservingLibrary;                                                              //@synthesize isObservingLibrary=_isObservingLibrary - In the implementation block
@property (getter=isShowingPurchases,nonatomic,readonly) char showingPurchases; 
@property (nonatomic,readonly) int viewType; 
@property (assign,nonatomic) int currentPopoverIdentifier;                                                         //@synthesize currentPopoverIdentifier=_currentPopoverIdentifier - In the implementation block
@property (assign,nonatomic) char isSearching;                                                                     //@synthesize isSearching=_isSearching - In the implementation block
@property (assign,nonatomic) char searchBarPushedUp;                                                               //@synthesize searchBarPushedUp=_searchBarPushedUp - In the implementation block
@property (assign,nonatomic) unsigned countOfBooksSelected;                                                        //@synthesize countOfBooksSelected=_countOfBooksSelected - In the implementation block
@property (nonatomic,retain) UIView * embeddedToolbarItemsView;                                                    //@synthesize embeddedToolbarItemsView=_embeddedToolbarItemsView - In the implementation block
@property (assign,nonatomic) char ignoreToolbarItemUpdates;                                                        //@synthesize ignoreToolbarItemUpdates=_ignoreToolbarItemUpdates - In the implementation block
@property (assign,nonatomic) char snapshotTaken;                                                                   //@synthesize snapshotTaken=_snapshotTaken - In the implementation block
@property (assign,nonatomic) char processingTraitCollection;                                                       //@synthesize processingTraitCollection=_processingTraitCollection - In the implementation block
@property (nonatomic,retain) NSString * seriesID;                                                                  //@synthesize seriesID=_seriesID - In the implementation block
@property (nonatomic,retain) NSMapTable * dataSourceToViewControllerMapTable;                                      //@synthesize dataSourceToViewControllerMapTable=_dataSourceToViewControllerMapTable - In the implementation block
@property (nonatomic,retain) BEHairlineDividerView * toolbarSeparatorLineView;                                     //@synthesize toolbarSeparatorLineView=_toolbarSeparatorLineView - In the implementation block
@property (assign,nonatomic) float topBackdropEmbeddedHeaderAdditionalHeight;                                      //@synthesize topBackdropEmbeddedHeaderAdditionalHeight=_topBackdropEmbeddedHeaderAdditionalHeight - In the implementation block
@property (assign,nonatomic) float bottomOfToolbar;                                                                //@synthesize bottomOfToolbar=_bottomOfToolbar - In the implementation block
@property (nonatomic,retain) NSString * embeddedHeaderSearchText; 
@property (nonatomic,retain) BKTransitioningViewController * transitionViewController;                             //@synthesize transitionViewController=_transitionViewController - In the implementation block
@property (nonatomic,retain) BKLibraryConfiguration * configuration;                                               //@synthesize configuration=_configuration - In the implementation block
@property (assign,getter=isEditLoadingIndicatorDisabled,nonatomic) char editLoadingIndicatorDisabled;              //@synthesize editLoadingIndicatorDisabled=_editLoadingIndicatorDisabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<BKLibraryCollection> currentCollection; 
@property (nonatomic,readonly) char wantsTabBar; 
@property (nonatomic,readonly) NSArray * configurations; 
+(id)lastUsedCollectionInManagedObjectContext:(id)arg1 ;
+(int)defaultViewType;
+(void)setLastUsedCollection:(id)arg1 ;
+(void)_setupButton:(id)arg1 toHaveTintColor:(id)arg2 ;
+(void)initialize;
+(id)_disabledColorForTintColor:(id)arg1 ;
-(char)isStoreAllowed;
-(void)dismissedLibraryAlertController;
-(id)initWithCollection:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)initWithCollection:(id)arg1 managedObjectContext:(id)arg2 viewType:(int)arg3 ;
-(void)_voiceOverStatusDidChangeNotification:(id)arg1 ;
-(BKTransitioningViewController *)transitionViewController;
-(void)_updateForLibraryLoadChange;
-(char)isShowingPurchases;
-(void)__updateNonEditingToolbarItems:(char)arg1 ;
-(void)_didSwipe:(id)arg1 ;
-(id<BKLibraryCollection>)currentCollection;
-(void)backButtonPressed:(id)arg1 ;
-(void)setWallpaperView:(BKBlurryWallpaperView *)arg1 ;
-(void)setTopBackdropView:(_UIBackdropView *)arg1 ;
-(void)setToolbarSeparatorLineView:(BEHairlineDividerView *)arg1 ;
-(void)setNightDarkenView:(IMPassthroughView *)arg1 ;
-(void)willTakeSnapshot:(id)arg1 ;
-(IMToolbar *)embeddedHeaderToolbar;
-(void)setHidingSeriesItems:(char)arg1 ;
-(void)cloudSyncCollectionsChanged:(id)arg1 ;
-(void)_theme_updateToolbarItems:(char)arg1 ;
-(void)clearBookEditingSet;
-(void)p_dismissDeleteAlertController:(char)arg1 ;
-(void)i_updateEmbeddedHeaderFrames;
-(void)_updateCurrentThemeAnimated:(char)arg1 force:(char)arg2 updateScrim:(char)arg3 ;
-(void)_theme_updateFrames;
-(void)_theme_updateSegmentedControl;
-(void)_setDoneLaunching;
-(void)_dockSearchBarIfVoiceOverIsEnabled;
-(void)hideOverlayViewController:(id)arg1 ;
-(IMSearchBar *)embeddedHeaderSearchField;
-(void)setEmbeddedHeaderSearchText:(NSString *)arg1 ;
-(void)_updateSearchDisplayLocked:(char)arg1 preserveVisualOffset:(char)arg2 animated:(char)arg3 ;
-(void)setCurrentPopoverIdentifier:(int)arg1 ;
-(id)predicateForCollection:(id)arg1 ;
-(void)_updateToolbarFrame;
-(id)currentPredicate;
-(void)_collectionDidModifyAnimated:(char)arg1 ;
-(void)setCollection:(id)arg1 animated:(char)arg2 ;
-(void)resetMainPredicateAndRepopulateDisplay;
-(void)setSeriesPrices:(NSDictionary *)arg1 ;
-(char)hidingSeriesItems;
-(char)showingAllBooks;
-(char)collectionNeedsUpdateForPresentingBook:(id)arg1 ;
-(id)setCollectionForBook:(id)arg1 ;
-(void)setCollectionForContentType:(int)arg1 ;
-(void)setSnapshotTaken:(char)arg1 ;
-(char)snapshotTaken;
-(id)_scrimColor;
-(void)_concludeMovingBooks:(id)arg1 toCollection:(id)arg2 ;
-(void)animateFadeComplete:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_animationPathForView:(id)arg1 toPoint:(CGPoint)arg2 duration:(float)arg3 ;
-(void)animateMoveComplete:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)animateBooks:(id)arg1 parameters:(id)arg2 destination:(CGRect)arg3 collection:(id)arg4 ;
-(void)_theme_updateToolbarBarTintColorForSeries:(char)arg1 ;
-(void)_updateBackdropViewSettingsWithTheme:(id)arg1 ;
-(float)topLayoutGuideForLibraryBooksViewController:(id)arg1 ;
-(UIView *)embeddedHeaderContentView;
-(float)_embeddedHeaderHeight;
-(void)setEmbeddedHeaderToolbar:(IMToolbar *)arg1 ;
-(id)makeEmbeddedHeaderToolbarItems;
-(void)setEmbeddedHeaderToolbarItems:(NSArray *)arg1 ;
-(void)setEmbeddedToolbarItemsView:(UIView *)arg1 ;
-(UIView *)embeddedToolbarItemsView;
-(char)_shouldPushUpSearchBar;
-(void)setEmbeddedToolbarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)embeddedToolbarButtonItem;
-(UIView *)embeddedHeaderContainerView;
-(float)topLayoutGuideForLibraryBooksViewController:(id)arg1 forSearchBar:(char)arg2 ;
-(UIBarButtonItem *)embeddedHeaderSearchBarItem;
-(float)_embeddedHeaderSearchFieldVerticalOffset;
-(void)_theme_setupWallpaperImage;
-(void)_theme_updateToolbarBarTintColor;
-(id)_theme_appTitleBarButtonItem;
-(void)_theme_updateAppTitleBarButtonItem;
-(void)_theme_updateEmbeddedHeaderSearchFieldForSeries:(char)arg1 ;
-(void)_theme_updateCollectionBarButtonForSeries:(char)arg1 ;
-(void)_theme_updateScrimColor;
-(void)_theme_updateViewTypeToggleBarButtonItem;
-(id)_themeIdentifierForBookshelf;
-(void)_applyCurrentThemeAnimated:(char)arg1 updateScrim:(char)arg2 ;
-(void)_embeddedHeaderSearchTextChanged;
-(void)_updateToolbarItems:(char)arg1 updateSeriesView:(char)arg2 ;
-(void)_seriesControlValueChanged:(id)arg1 ;
-(void)_embeddedHeaderSearchButtonClicked;
-(void)setIsSearching:(char)arg1 ;
-(void)setSearchBarPushedUp:(char)arg1 ;
-(NSString *)embeddedHeaderSearchText;
-(char)searchBarPushedUp;
-(void)singleBookDeleteWarning:(id)arg1 ;
-(char)_bookIsDeletable:(id)arg1 ;
-(void)toggleBookEditing:(id)arg1 ;
-(void)tryOpenBook:(id)arg1 ;
-(char)isBookSelected:(id)arg1 ;
-(id)_seriesSegmentedControl;
-(id)_sortControlItemsForListViewController:(id)arg1 ;
-(id)_collectionsListViewControllerForPresentationController:(id)arg1 ;
-(char)_bookIsSelectable:(id)arg1 ;
-(NSMutableSet *)bookEditingSet;
-(id)_allSelectableBooks;
-(void)doneButtonPressed:(id)arg1 ;
-(char)shouldShowEditingControls;
-(int)currentPopoverIdentifier;
-(id)_collectionsBarButtonItem;
-(void)toggleBookEditing:(id)arg1 updateToolbar:(char)arg2 ;
-(void)_seriesViewDoneButtonSelected:(id)arg1 ;
-(id)_bookMovingSubset;
-(id)_moveBarButtonItem;
-(id)bookDeletingSubset;
-(void)deleteBooksWarningActionSheet:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)_shouldAdjustBottomOfToolbar;
-(char)isEveryBookSelected;
-(void)_updateViewTypeSwitch;
-(void)updateNonEditingToolbarItemsWithCollection:(id)arg1 animated:(char)arg2 ;
-(id)_backBarButtonItemTintedToSeries:(char)arg1 ;
-(char)isEditLoadingIndicatorDisabled;
-(id)_editBarButtonItemTintedToSeries:(char)arg1 ;
-(id)_loadingBarButtonItem;
-(id)_viewTypeToggleBarButtonItem;
-(id)_debugToolbarItem;
-(void)setCollectionsBarButtonTitle:(id)arg1 tintForSeries:(char)arg2 ;
-(id)toolbarControlForBooksViewController:(id)arg1 forSeries:(char)arg2 ;
-(void)__updateEditingToolbarItems:(char)arg1 ;
-(void)__updateSearchModeToolbarItems:(char)arg1 ;
-(void)collectionsButtonPressed:(id)arg1 ;
-(id)_defaultCollectionsTitle;
-(id)_collectionsBarButtonItemTintedForSeries:(char)arg1 ;
-(id)_collectionsBarButtonForSeries:(char)arg1 ;
-(char)_isLeftToRight;
-(void)selectAllButtonPressed:(id)arg1 ;
-(void)deselectAllButtonPressed:(id)arg1 ;
-(void)editButtonPressed:(id)arg1 ;
-(void)moveButtonPressed:(id)arg1 ;
-(void)deleteButtonPressed:(id)arg1 ;
-(char)anyBooksDeletable;
-(void)viewTypeToggleButtonPressed:(id)arg1 ;
-(id)_appTitleBarButtonItemForCollection:(id)arg1 ;
-(id)_editModeTitleBarText;
-(id)_titleBarTextForCollection:(id)arg1 ;
-(char)isBookFullyVisible:(id)arg1 ;
-(void)resetSpotForBook:(id)arg1 ;
-(char)processingTraitCollection;
-(void)setProcessingTraitCollection:(char)arg1 ;
-(void)transitionController:(id)arg1 willTransitionFromViewController:(id)arg2 toViewController:(id)arg3 ;
-(char)wallpaperStyleWantsTransparentLightEffect;
-(void)libraryBooksViewController:(id)arg1 didSelectObject:(id)arg2 modalViewControllerDismissalCompletion:(/*^block*/id)arg3 ;
-(char)libraryBooksViewController:(id)arg1 canDeleteObject:(id)arg2 ;
-(char)libraryBooksViewController:(id)arg1 isObjectSelected:(id)arg2 ;
-(void)libraryBooksViewController:(id)arg1 toolbarWillAppear:(id)arg2 ;
-(void)libraryBooksViewController:(id)arg1 layoutToolbar:(id)arg2 ;
-(float)bottomOfToolbarForLibraryBooksViewController:(id)arg1 ;
-(void)showToolbarSeparatorLineForlibraryBooksViewController:(id)arg1 show:(char)arg2 ;
-(float)embeddedHeaderHeightForLibraryBooksViewController:(id)arg1 ;
-(float)embeddedHeaderDistanceUnfurledForLibraryBooksViewController:(id)arg1 ;
-(void)libraryBooksViewController:(id)arg1 unfurlEmbeddedHeader:(float)arg2 ;
-(void)libraryBooksViewController:(id)arg1 didShowEmbeddedHeader:(char)arg2 ;
-(char)libraryBooksViewControllerIsDisablingMoving:(id)arg1 ;
-(void)libraryBooksViewControllerResignSearch:(id)arg1 ;
-(void)libraryBooksViewControllerSeriesTitleNeedsUpdate:(id)arg1 ;
-(CGRect)mainToolbarFrameForBooksViewController:(id)arg1 ;
-(char)searchBarPushedUpForBooksViewController:(id)arg1 ;
-(id)searchTextForLibraryBooksViewController:(id)arg1 ;
-(void)libraryBooksViewController:(id)arg1 deleteBooks:(id)arg2 ;
-(void)collectionListView:(id)arg1 cancelSelected:(char)arg2 ;
-(void)collectionListView:(id)arg1 collectionSelected:(id)arg2 ;
-(void)collectionListView:(id)arg1 moveSelected:(id)arg2 toCollection:(id)arg3 animationDestination:(CGRect)arg4 ;
-(void)collectionListView:(id)arg1 collectionChanged:(id)arg2 ;
-(id)collectionListView:(id)arg1 collectionDeleted:(id)arg2 ;
-(id)collectionListView:(id)arg1 alertControllerForDeletingCollection:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)collectionListViewShowAllPurchasesChanged:(id)arg1 ;
-(void)setCollection:(id)arg1 forTransition:(char)arg2 ;
-(char)wantsTabBar;
-(CGRect)coverRectForBook:(id)arg1 ;
-(id)coverImageForBook:(id)arg1 ;
-(char)useAnimationForLargeCover;
-(void)setEmptySpot:(char)arg1 forBook:(id)arg2 ;
-(void)scrollToMakeBookVisible:(id)arg1 ;
-(id)tintedClearButtonImage:(char)arg1 ;
-(id)libraryBooksListViewController:(id)arg1 sortKeyForSortType:(int)arg2 ;
-(CGRect)_libraryBooksViewController:(id)arg1 viewFrameForContentBounds:(CGRect)arg2 wantsUnderlap:(char)arg3 ;
-(id)_backBarButtonItem;
-(id)_viewTypeToggleBarButtonItemTintedToSeries:(char)arg1 ;
-(id)_bookCountText;
-(id)_selectionCountText;
-(void)setEmbeddedHeaderContainerView:(UIView *)arg1 ;
-(void)setEmbeddedHeaderSearchField:(IMSearchBar *)arg1 ;
-(void)setEmbeddedHeaderSearchBarItem:(UIBarButtonItem *)arg1 ;
-(NSArray *)embeddedHeaderToolbarItems;
-(UIBarButtonItem *)embeddedHeaderViewTypeBarButtonItem;
-(void)setEmbeddedHeaderViewTypeBarButtonItem:(UIBarButtonItem *)arg1 ;
-(_UIBackdropView *)topBackdropView;
-(IMPassthroughView *)nightDarkenView;
-(NSDictionary *)seriesPrices;
-(UIBarButtonItem *)collectionsBarButtonItemCompact;
-(void)setCollectionsBarButtonItemCompact:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)appTitleBarButtonItem;
-(void)setAppTitleBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)moveBarButtonItem;
-(void)setMoveBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)deleteBarButtonItem;
-(void)setDeleteBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)viewTypeToggleBarButtonItem;
-(void)setViewTypeToggleBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)selectAllBarButtonItem;
-(void)setSelectAllBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)deselectAllBarButtonItem;
-(void)setDeselectAllBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setDoneBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)editBarButtonItem;
-(void)setEditBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setIsStoreAllowed:(char)arg1 ;
-(UIButton *)collectionsBarButton;
-(void)setCollectionsBarButton:(UIButton *)arg1 ;
-(UIButton *)appTitleBarButton;
-(void)setAppTitleBarButton:(UIButton *)arg1 ;
-(UISegmentedControl *)viewTypeSwitch;
-(void)setViewTypeSwitch:(UISegmentedControl *)arg1 ;
-(UISegmentedControl *)sortSegmentedControl;
-(void)setSortSegmentedControl:(UISegmentedControl *)arg1 ;
-(UISegmentedControl *)seriesSegmentedControl;
-(void)setSeriesSegmentedControl:(UISegmentedControl *)arg1 ;
-(UIBarButtonItem *)loadingBarButtonItem;
-(void)setLoadingBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setBookEditingSet:(NSMutableSet *)arg1 ;
-(BKLibraryAlertController *)deleteAlertController;
-(void)setDeleteAlertController:(BKLibraryAlertController *)arg1 ;
-(char)isObservingLibrary;
-(void)setIsObservingLibrary:(char)arg1 ;
-(unsigned)countOfBooksSelected;
-(void)setCountOfBooksSelected:(unsigned)arg1 ;
-(char)ignoreToolbarItemUpdates;
-(void)setIgnoreToolbarItemUpdates:(char)arg1 ;
-(NSString *)seriesID;
-(void)setSeriesID:(NSString *)arg1 ;
-(NSMapTable *)dataSourceToViewControllerMapTable;
-(void)setDataSourceToViewControllerMapTable:(NSMapTable *)arg1 ;
-(BEHairlineDividerView *)toolbarSeparatorLineView;
-(float)topBackdropEmbeddedHeaderAdditionalHeight;
-(void)setTopBackdropEmbeddedHeaderAdditionalHeight:(float)arg1 ;
-(float)bottomOfToolbar;
-(void)setBottomOfToolbar:(float)arg1 ;
-(void)setTransitionViewController:(BKTransitioningViewController *)arg1 ;
-(void)setEditLoadingIndicatorDisabled:(char)arg1 ;
-(UIBarButtonItem *)doneBarButtonItem;
-(NSArray *)configurations;
-(char)isSearching;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)setCollection:(id)arg1 ;
-(id)_selectAllBarButtonItem;
-(id)_deselectAllBarButtonItem;
-(id)_doneBarButtonItem;
-(void)_updateBackdropFrame;
-(void)dealloc;
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BKLibraryBooksViewController *)topViewController;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(unsigned)supportedInterfaceOrientations;
-(void)_setupGestureRecognizers;
-(void)loadView;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)setBackBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)backBarButtonItem;
-(int)positionForBar:(id)arg1 ;
-(int)viewType;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)hidesBottomBarWhenPushed;
-(IMToolbar *)toolbar;
-(void)setToolbar:(IMToolbar *)arg1 ;
-(void)setConfiguration:(BKLibraryConfiguration *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(BKLibraryConfiguration *)configuration;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(float)_statusBarHeight;
-(id)_deleteBarButtonItem;
-(id)_editBarButtonItem;
-(BKLibraryManagedObjectContext *)moc;
-(void)setMoc:(BKLibraryManagedObjectContext *)arg1 ;
-(BKBlurryWallpaperView *)wallpaperView;
@end

