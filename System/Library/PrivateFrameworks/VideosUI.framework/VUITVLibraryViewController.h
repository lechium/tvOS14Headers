/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VUIMenuCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/VUILibraryDataSourceDelegate.h>
#import <libobjc.A.dylib/VUIFamilyMembersViewControllerDelegate.h>
#import <libobjc.A.dylib/VUIFamilySharingContentProtocol.h>

@class VUIFamilyMember, VUIMenuCollectionViewController, VUITVLibraryView, UIViewController, VUILibraryMenuDataSource, NSIndexPath, NSSet, VUIViewControllerContentPresenter, NSMutableDictionary, NSString;

@interface VUITVLibraryViewController : UIViewController <VUIMenuCollectionViewControllerDelegate, VUILibraryDataSourceDelegate, VUIFamilyMembersViewControllerDelegate, VUIFamilySharingContentProtocol> {

	VUIFamilyMember* _familyMember;
	VUIMenuCollectionViewController* _menuCollectionViewController;
	VUITVLibraryView* _tvLibraryView;
	UIViewController* _detailViewController;
	VUILibraryMenuDataSource* _menuDataSource;
	NSIndexPath* _currentlySelectedIndexPath;
	NSSet* _validCategories;
	VUIViewControllerContentPresenter* _contentPresenter;
	NSMutableDictionary* _entitiesDataSourceForMenuItem;

}

@property (nonatomic,retain) VUIMenuCollectionViewController * menuCollectionViewController;              //@synthesize menuCollectionViewController=_menuCollectionViewController - In the implementation block
@property (nonatomic,retain) VUITVLibraryView * tvLibraryView;                                            //@synthesize tvLibraryView=_tvLibraryView - In the implementation block
@property (nonatomic,retain) UIViewController * detailViewController;                                     //@synthesize detailViewController=_detailViewController - In the implementation block
@property (nonatomic,retain) VUILibraryMenuDataSource * menuDataSource;                                   //@synthesize menuDataSource=_menuDataSource - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentlySelectedIndexPath;                                    //@synthesize currentlySelectedIndexPath=_currentlySelectedIndexPath - In the implementation block
@property (nonatomic,retain) NSSet * validCategories;                                                     //@synthesize validCategories=_validCategories - In the implementation block
@property (nonatomic,retain) VUIViewControllerContentPresenter * contentPresenter;                        //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * entitiesDataSourceForMenuItem;                         //@synthesize entitiesDataSourceForMenuItem=_entitiesDataSourceForMenuItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) VUIFamilyMember * familyMember;                                              //@synthesize familyMember=_familyMember - In the implementation block
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(id)preferredFocusEnvironments;
-(void)_accountsChanged:(id)arg1 ;
-(UIViewController *)detailViewController;
-(VUIFamilyMember *)familyMember;
-(void)setFamilyMember:(VUIFamilyMember *)arg1 ;
-(void)setDetailViewController:(UIViewController *)arg1 ;
-(id)_deviceMediaLibrary;
-(void)_delayedGridUpdate;
-(VUIViewControllerContentPresenter *)contentPresenter;
-(VUILibraryMenuDataSource *)menuDataSource;
-(BOOL)_isDeviceMediaLibraryInitialUpdateInProgress;
-(void)_startMonitoringDeviceMediaLibraryInitialUpdate;
-(void)_showContentOrNoContentView;
-(VUITVLibraryView *)tvLibraryView;
-(VUIMenuCollectionViewController *)menuCollectionViewController;
-(void)_initializeLibraryViewControllersWithMenuItems:(id)arg1 ;
-(NSIndexPath *)currentlySelectedIndexPath;
-(void)setCurrentlySelectedIndexPath:(NSIndexPath *)arg1 ;
-(id)initWithMenuDataSource:(id)arg1 ;
-(NSMutableDictionary *)entitiesDataSourceForMenuItem;
-(void)setEntitiesDataSourceForMenuItem:(NSMutableDictionary *)arg1 ;
-(id)_metricsPageTypeForMenuItemAtIndexPath:(id)arg1 ;
-(BOOL)_shouldShowContentView;
-(void)_deviceMediaLibraryUpdateStateDidChange:(id)arg1 ;
-(void)setMenuDataSource:(VUILibraryMenuDataSource *)arg1 ;
-(void)_stopMonitoringDeviceMediaLibraryInitialUpdate;
-(void)setMenuCollectionViewController:(VUIMenuCollectionViewController *)arg1 ;
-(void)didSelectMenuItemAtIndexPath:(id)arg1 ;
-(void)didUpdateFocusToIndexPath:(id)arg1 ;
-(void)dataSourceDidFinishFetching:(id)arg1 ;
-(void)familyMemberViewController:(id)arg1 didSelectFamilyMember:(id)arg2 ;
-(void)setTvLibraryView:(VUITVLibraryView *)arg1 ;
-(NSSet *)validCategories;
-(void)setValidCategories:(NSSet *)arg1 ;
-(void)setContentPresenter:(VUIViewControllerContentPresenter *)arg1 ;
@end
