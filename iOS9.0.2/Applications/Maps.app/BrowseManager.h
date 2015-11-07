/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/SearchManagerObserver.h>

@class NSMutableDictionary, NSMapTable, NSArray, RTRoutineManager, NSString, NSMutableArray, GEOSearchCategory, GEOMapServiceTraits, NSHashTable, UIImage, UIColor;

@interface BrowseManager : NSObject <SearchManagerObserver> {

	char _needsRefreshCategories;
	char _needsRefreshNearbyCategories;
	char _needsUpdate;
	NSMutableDictionary* _imagesCache;
	unsigned _requestCount;
	NSMapTable* _nearbyCache;
	NSMapTable* _nearbyMapItemCache;
	NSMapTable* _nearbyStringsCache;
	NSArray* _geoCategories;
	RTRoutineManager* _routineManager;
	NSArray* _routinePlaces;
	char _needToSendDisplayedUsage;
	NSString* _filter;
	NSMutableArray* _categories;
	NSArray* _originalSearchResults;
	NSArray* _currentSearchResults;
	NSArray* _currentNearbyResults;
	GEOSearchCategory* _currentSearchCategory;
	GEOSearchCategory* _currentNearbyCategory;
	NSString* _currentNearbySectionHeader;
	GEOMapServiceTraits* _traits;
	NSHashTable* _observers;
	UIImage* _categoryImage;
	UIImage* _categoryImageForCell;
	UIColor* _categoryColor;
	GEOSearchCategory* _parentNearbyCategory;
	GEOSearchCategory* _oldSelectedCategory;
	GEOSearchCategory* _lastSelectedCategory;

}

@property (nonatomic,retain) NSString * filter;                                      //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSArray * originalSearchResults;                        //@synthesize originalSearchResults=_originalSearchResults - In the implementation block
@property (nonatomic,retain) NSArray * currentSearchResults;                         //@synthesize currentSearchResults=_currentSearchResults - In the implementation block
@property (nonatomic,retain) NSArray * currentNearbyResults;                         //@synthesize currentNearbyResults=_currentNearbyResults - In the implementation block
@property (nonatomic,retain) GEOSearchCategory * currentSearchCategory;              //@synthesize currentSearchCategory=_currentSearchCategory - In the implementation block
@property (nonatomic,retain) GEOSearchCategory * currentNearbyCategory;              //@synthesize currentNearbyCategory=_currentNearbyCategory - In the implementation block
@property (nonatomic,retain) GEOSearchCategory * parentNearbyCategory;               //@synthesize parentNearbyCategory=_parentNearbyCategory - In the implementation block
@property (nonatomic,retain) GEOSearchCategory * oldSelectedCategory;                //@synthesize oldSelectedCategory=_oldSelectedCategory - In the implementation block
@property (nonatomic,retain) GEOSearchCategory * lastSelectedCategory;               //@synthesize lastSelectedCategory=_lastSelectedCategory - In the implementation block
@property (nonatomic,retain) NSString * currentNearbySectionHeader;                  //@synthesize currentNearbySectionHeader=_currentNearbySectionHeader - In the implementation block
@property (nonatomic,retain) GEOMapServiceTraits * traits;                           //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) char showsNearby; 
@property (nonatomic,readonly) char showsCategoryResults; 
@property (assign,nonatomic) char needToSendDisplayedUsage;                          //@synthesize needToSendDisplayedUsage=_needToSendDisplayedUsage - In the implementation block
@property (nonatomic,readonly) UIImage * categoryImage;                              //@synthesize categoryImage=_categoryImage - In the implementation block
@property (nonatomic,readonly) UIImage * categoryImageForCell;                       //@synthesize categoryImageForCell=_categoryImageForCell - In the implementation block
@property (nonatomic,readonly) UIColor * categoryColor;                              //@synthesize categoryColor=_categoryColor - In the implementation block
@property (nonatomic,retain) NSMutableArray * categories;                            //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)vkImage:(unsigned)arg1 ;
+(id)imageFor:(unsigned)arg1 andColor:(CGColorRef)arg2 ;
+(void)maskedImage:(id)arg1 inRect:(CGRect)arg2 withColor:(CGColorRef)arg3 inContext:(CGContextRef)arg4 ;
+(id)sharedManager;
-(void)searchManager:(id)arg1 didReceiveCategoryResults:(id)arg2 ;
-(void)searchManager:(id)arg1 didReceiveNearbyCategoryResults:(id)arg2 sectionHeader:(id)arg3 andError:(id)arg4 ;
-(void)searchManagerSearchFailed:(id)arg1 withError:(id)arg2 ;
-(char)needToSendDisplayedUsage;
-(id)imageForCategory:(id)arg1 ;
-(void)setOriginalSearchResults:(NSArray *)arg1 ;
-(id)nearbyCache;
-(void)setCurrentSearchResults:(NSArray *)arg1 ;
-(UIImage *)categoryImage;
-(void)getBatchNearby;
-(void)setCurrentNearbyCategory:(GEOSearchCategory *)arg1 ;
-(id)cachedCategories;
-(void)memoryWarning;
-(void)submitBrowseUsageForAction:(int)arg1 resultIndex:(unsigned)arg2 ;
-(void)submitBrowseUsageIfNeeded;
-(NSArray *)originalSearchResults;
-(void)getCategoriesWithCompletion:(/*^block*/id)arg1 ;
-(id)nearbyResultsForCategory:(id)arg1 ;
-(NSArray *)currentSearchResults;
-(void)getShortcutForDirections:(/*^block*/id)arg1 ;
-(NSArray *)currentNearbyResults;
-(void)preCacheWithTraits:(id)arg1 ;
-(void)setCurrentNearbySectionHeader:(NSString *)arg1 ;
-(GEOSearchCategory *)currentSearchCategory;
-(char)showsNearby;
-(GEOSearchCategory *)currentNearbyCategory;
-(void)setOldSelectedCategory:(GEOSearchCategory *)arg1 ;
-(void)setCurrentSearchCategory:(GEOSearchCategory *)arg1 ;
-(void)needsUpdateObservers;
-(NSString *)currentNearbySectionHeader;
-(id)categoryImageForCellWithColor:(id)arg1 ;
-(id)nearbyStringsCache;
-(UIColor *)categoryColor;
-(UIImage *)categoryImageForCell;
-(GEOSearchCategory *)parentNearbyCategory;
-(void)invalidateCategoryImageForCell;
-(void)setParentNearbyCategory:(GEOSearchCategory *)arg1 ;
-(GEOSearchCategory *)oldSelectedCategory;
-(GEOSearchCategory *)lastSelectedCategory;
-(void)setNeedToSendDisplayedUsage:(char)arg1 ;
-(void)setLastSelectedCategory:(GEOSearchCategory *)arg1 ;
-(void)setCurrentNearbyResults:(NSArray *)arg1 ;
-(char)showsCategoryResults;
-(void)updateObservers;
-(void)_getHomeWorkPlaces;
-(NSString *)filter;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setFilter:(NSString *)arg1 ;
-(GEOMapServiceTraits *)traits;
-(NSMutableArray *)categories;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)setTraits:(GEOMapServiceTraits *)arg1 ;
-(void)setCategories:(NSMutableArray *)arg1 ;
@end
