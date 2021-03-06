/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVTopShelfModernContentExtensionFinder;

@interface TVTopShelfContentExtensionManager : NSObject {

	TVTopShelfModernContentExtensionFinder* _publicModernExtensionFinder;
	TVTopShelfModernContentExtensionFinder* _privateModernExtensionFinder;

}

@property (nonatomic,retain) TVTopShelfModernContentExtensionFinder * publicModernExtensionFinder;               //@synthesize publicModernExtensionFinder=_publicModernExtensionFinder - In the implementation block
@property (nonatomic,retain) TVTopShelfModernContentExtensionFinder * privateModernExtensionFinder;              //@synthesize privateModernExtensionFinder=_privateModernExtensionFinder - In the implementation block
+(id)sharedInstance;
-(id)_init;
-(TVTopShelfModernContentExtensionFinder *)privateModernExtensionFinder;
-(TVTopShelfModernContentExtensionFinder *)publicModernExtensionFinder;
-(id)_legacyExtensionControllerForApplicationBundleIdentifier:(id)arg1 ;
-(BOOL)applicationHasBinaryExtension:(id)arg1 ;
-(id)topShelfContentExtensionControllerForApplicationBundleIdentifier:(id)arg1 ;
-(void)setPublicModernExtensionFinder:(TVTopShelfModernContentExtensionFinder *)arg1 ;
-(void)setPrivateModernExtensionFinder:(TVTopShelfModernContentExtensionFinder *)arg1 ;
@end

