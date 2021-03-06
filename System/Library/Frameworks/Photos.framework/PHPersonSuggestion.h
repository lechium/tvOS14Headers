/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHFace, PHPerson;

@interface PHPersonSuggestion : NSObject {

	BOOL _confirmed;
	PHFace* _keyFace;
	PHPerson* _person;

}

@property (nonatomic,readonly) PHFace * keyFace;               //@synthesize keyFace=_keyFace - In the implementation block
@property (nonatomic,readonly) PHPerson * person;              //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) BOOL confirmed;                 //@synthesize confirmed=_confirmed - In the implementation block
-(PHPerson *)person;
-(BOOL)confirmed;
-(PHFace *)keyFace;
-(id)initWithKeyFace:(id)arg1 person:(id)arg2 confirmed:(BOOL)arg3 ;
@end

