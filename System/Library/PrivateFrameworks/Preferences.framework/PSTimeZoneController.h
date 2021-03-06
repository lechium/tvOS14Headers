/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>

@class NSArray, PSSpecifier, PSListController, UISearchController, NSString;

@interface PSTimeZoneController : UITableViewController <UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate> {

	NSArray* _cities;
	PSSpecifier* _specifier;
	PSListController* _parentController;
	UISearchController* _searchController;

}

@property (nonatomic,retain) UISearchController * searchController;                   //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                 //@synthesize specifier=_specifier - In the implementation block
@property (assign,nonatomic,__weak) PSListController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setTimeZone:(id)arg1 ;
-(PSSpecifier *)specifier;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(void)setParentController:(PSListController *)arg1 ;
-(PSListController *)parentController;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
@end

