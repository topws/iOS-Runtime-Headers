/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3QuerySection : NSObject {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _range;
    unsigned int  _sectionIndex;
}

@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property (nonatomic) unsigned int sectionIndex;

- (id)description;
- (unsigned int)hash;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 sectionIndex:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (unsigned int)sectionIndex;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSectionIndex:(unsigned int)arg1;

@end
