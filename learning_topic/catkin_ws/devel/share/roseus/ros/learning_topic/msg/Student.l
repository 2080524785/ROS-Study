;; Auto-generated. Do not edit!


(when (boundp 'learning_topic::Student)
  (if (not (find-package "LEARNING_TOPIC"))
    (make-package "LEARNING_TOPIC"))
  (shadow 'Student (find-package "LEARNING_TOPIC")))
(unless (find-package "LEARNING_TOPIC::STUDENT")
  (make-package "LEARNING_TOPIC::STUDENT"))

(in-package "ROS")
;;//! \htmlinclude Student.msg.html


(intern "*FEMALE*" (find-package "LEARNING_TOPIC::STUDENT"))
(shadow '*FEMALE* (find-package "LEARNING_TOPIC::STUDENT"))
(defconstant learning_topic::Student::*FEMALE* 0)
(intern "*MALE*" (find-package "LEARNING_TOPIC::STUDENT"))
(shadow '*MALE* (find-package "LEARNING_TOPIC::STUDENT"))
(defconstant learning_topic::Student::*MALE* 1)

(defun learning_topic::Student-to-symbol (const)
  (cond
        ((= const 0) 'learning_topic::Student::*female*)
        ((= const 1) 'learning_topic::Student::*male*)
        (t nil)))

(defclass learning_topic::Student
  :super ros::object
  :slots (_msg _sex _age _height _weight ))

(defmethod learning_topic::Student
  (:init
   (&key
    ((:msg __msg) "")
    ((:sex __sex) 0)
    ((:age __age) 0)
    ((:height __height) 0)
    ((:weight __weight) 0)
    )
   (send-super :init)
   (setq _msg (string __msg))
   (setq _sex (round __sex))
   (setq _age (round __age))
   (setq _height (round __height))
   (setq _weight (round __weight))
   self)
  (:msg
   (&optional __msg)
   (if __msg (setq _msg __msg)) _msg)
  (:sex
   (&optional __sex)
   (if __sex (setq _sex __sex)) _sex)
  (:age
   (&optional __age)
   (if __age (setq _age __age)) _age)
  (:height
   (&optional __height)
   (if __height (setq _height __height)) _height)
  (:weight
   (&optional __weight)
   (if __weight (setq _weight __weight)) _weight)
  (:serialization-length
   ()
   (+
    ;; string _msg
    4 (length _msg)
    ;; uint8 _sex
    1
    ;; uint8 _age
    1
    ;; uint8 _height
    1
    ;; uint8 _weight
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _msg
       (write-long (length _msg) s) (princ _msg s)
     ;; uint8 _sex
       (write-byte _sex s)
     ;; uint8 _age
       (write-byte _age s)
     ;; uint8 _height
       (write-byte _height s)
     ;; uint8 _weight
       (write-byte _weight s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _msg
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _msg (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint8 _sex
     (setq _sex (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _age
     (setq _age (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _height
     (setq _height (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _weight
     (setq _weight (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get learning_topic::Student :md5sum-) "b76ec3a538902e4d1c321cf33dc84b32")
(setf (get learning_topic::Student :datatype-) "learning_topic/Student")
(setf (get learning_topic::Student :definition-)
      "string msg
uint8 sex
uint8 age
uint8 height
uint8 weight
uint8 female = 0
uint8 male = 1
")



(provide :learning_topic/Student "b76ec3a538902e4d1c321cf33dc84b32")


